import RPi.GPIO as GPIO
import time

led_pin = 4 # 0 for WiringPi

GPIO.setmode(GPIO.BCM)
GPIO.setup(led_pin, GPIO.OUT)

pwm = GPIO.PWM(led_pin, 50)
pwm.start(0)

while True:
	x = int(input("1부터 6까지 원하는 숫자를 입력해주세요. 종료를 원하는 경우 0을 입력해주세요"))

	if x == 1:
		print("LED On")
		GPIO.output(led_pin, GPIO.HIGH)

	elif x == 2:
		print("LED Off")
		GPIO.output(led_pin, GPIO.LOW)

	elif x == 3:
		print("LED 3s High")
		for t_high in range(0, 101, 1):
			pwm.ChangeDutyCycle(t_high)
			time.sleep(0.03)

	elif x == 4:
		print("LED 3s Low")
		for t_high in range(100, -1, -1):
			pwm.ChangeDutyCycle(t_high)
			time.sleep(0.03)

	elif x == 5:
		print("LED 3s High and 3s Low")
		for t_high in range(0, 101, 1):
			pwm.ChangeDutyCycle(t_high)
			time.sleep(0.03)
		for t_high in range(100, -1 ,-1):
			pwm.ChangeDutyCycle(t_high)
			time.sleep(0.03)

	elif x == 6:
		print("Input sencond, LED Input second to High and Low")
		timeN = int(input("원하는 시간을 입력해주세요: "))
		for t_high in range(0, 101, 1):
			pwm.ChangeDutyCycle(t_high)
			time.sleep(timeN * 0.01)
		for t_high in range(100, -1 ,-1):
			pwm.ChangeDutyCycle(t_high)
			time.sleep(timeN * 0.01)


	elif x == 0:
		print("Exit")
		break

	else:
		print("1부터 6까지 원하는 숫자를 입력해주세요. 종료를 원하는 경우 0을 입력해주세요")
