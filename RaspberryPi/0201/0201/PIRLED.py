import RPi.GPIO as GPIO
import time

GPIO.setmode(GPIO.BCM)

GPIO.setup(12, GPIO.OUT)
GPIO.setup(27, GPIO.IN)

try:
    while 1:
        pir_state = GPIO.input(27)
        if pir_state == True:
            GPIO.output(12, True);
            print("Monion Detected")
            time.sleep(1)
        else:
            GPIO.output(12, False)
            time.sleep(1)
except KeyboardInterrupt:
    GPIO.cleanup()