#Quintero y Valdez
import serial
import time
dev = serial.Serial("COM6",9600)
dev.timeout=1

while True:
    i = input("Escriba on para prender y off para apagar, finalizar para salir): ").strip()
    if i == 'finalizar':
        print('programa finalizado')
        break
    
    dev.write(i.encode())
    time.sleep(0.5)
    print(dev.readline().decode('ascii'))
dev.close()