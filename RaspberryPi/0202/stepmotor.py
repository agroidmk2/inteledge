import RPi.GPIO as GPIO
import time

GPIO.setmode(GPIO.BCM)

motor_pin=[4,5,6,7]

GPIO.setwarnings(False)

GPIO.setmode(GPIO.BCM)


for i in motor_pin:                      
    GPIO.setup(i,GPIO.OUT)
    GPIO.output(i,GPIO.LOW)


print("Step Motor Control Start !! \n")


for i in range(515):
    
    for j in motor_pin:                    
        GPIO.output(j,GPIO.HIGH)
        time.sleep(0.002)
        GPIO.output(j,GPIO.LOW)
    
GPIO.cleanup()


