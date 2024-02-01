import RPi.GPIO as GPIO
import time

GPIO.setmode(GPIO.BCM)

buzz = 12

GPIO.setup(buzz, GPIO.OUT)

freq = [523, 587, 659, 698, 784, 880, 988, 1047]

def makeTone(freq):
    scale = GPIO.PWM(buzz, freq)
    scale.start(10)
    time.sleep(0.5)
    scale.stop()

try:
    for x in freq:
        makeTone(x)
    GPIO.cleanup()

except KeyboardInterrupt:
    GPIO.cleanup()
