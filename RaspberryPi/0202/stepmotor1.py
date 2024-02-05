import RPi.GPIO as GPIO
import time

STEP_OUTA = 27
STEP_OUTB = 0
STEP_OUT2A = 1
STEP_OUT2B = 24

GPIO.setmode(GPIO.BCM)
GPIO.setup(STEP_OUTA, GPIO.OUT)
GPIO.setup(STEP_OUTB, GPIO.OUT)
GPIO.setup(STEP_OUT2A, GPIO.OUT)
GPIO.setup(STEP_OUT2B, GPIO.OUT)

GPIO.output(STEP_OUTA, GPIO.LOW)
GPIO.output(STEP_OUTB, GPIO.LOW)
GPIO.output(STEP_OUT2A, GPIO.LOW)
GPIO.output(STEP_OUT2B, GPIO.LOW)

print("Step Motor Control Start!!")
for i in range(2000):
    GPIO.output(STEP_OUTA, GPIO.HIGH)
    time.sleep(0.005)
    GPIO.output(STEP_OUTA, GPIO.LOW)
    GPIO.output(STEP_OUTB, GPIO.HIGH)
    time.sleep(0.005)
    GPIO.output(STEP_OUTB, GPIO.LOW)
    GPIO.output(STEP_OUT2A, GPIO.HIGH)
    time.sleep(0.005)
    GPIO.output(STEP_OUT2A, GPIO.LOW)
    GPIO.output(STEP_OUT2B, GPIO.HIGH)
    time.sleep(0.005)
    GPIO.output(STEP_OUT2B, GPIO.LOW)

GPIO.cleanup()
