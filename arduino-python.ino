//Quintero y Valdez
//Control de leds por Arduino-Python

const int led1=10;
const int led2=12;
const int led3=11;
String rec;
int var=0;

void setup() {
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  Serial.begin(9600);
  
}
void loop() {
  if(Serial.available()>0){
    rec = Serial.readStringUntil('\n');
    if(rec == "on"){
      digitalWrite(led1,HIGH);
      digitalWrite(led2,HIGH);
      digitalWrite(led3,HIGH);
      Serial.write("Leds prendido");   
    }
  if(rec== "off"){
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    Serial.write("Leds apagados");
  }
 
  }
}
