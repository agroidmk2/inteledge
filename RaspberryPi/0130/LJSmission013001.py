import RPi.GPIO as GPIO
import time

led_pin_RED = 4
led_pin_GREEN = 5
led_pin_BLUE = 6

GPIO.setmode(GPIO.BCM)
GPIO.setup(led_pin_RED, GPIO.OUT)
GPIO.setup(led_pin_GREEN, GPIO.OUT)
GPIO.setup(led_pin_BLUE, GPIO.OUT)

for i in range(0,20):
	GPIO.output(led_pin_RED,True)
	time.sleep(0.5)
	GPIO.output(led_pin_RED,False)
	GPIO.output(led_pin_GREEN,True)
	time.sleep(0.5)
	GPIO.output(led_pin_GREEN,False)
	GPIO.output(led_pin_BLUE,True)
	time.sleep(0.5)
	GPIO.output(led_pin_BLUE,False)
	time.sleep(0.5)
GPIO.cleanup()
