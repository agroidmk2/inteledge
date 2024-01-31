import RPi.GPIO as GPIO
import time
import random

LED_RED = 4
LED_GREEN = 5
LED_BLUE = 6

pattern = []

BRIGHT_VALUE = 100


BRIGHT_TIME = 0.1

pattern1 = [LED_RED, LED_RED, LED_GREEN, LED_GREEN, LED_BLUE, LED_BLUE]

GPIO.setmode(GPIO.BCM)

GPIO.setup(LED_RED, GPIO.OUT)
GPIO.setup(LED_GREEN, GPIO.OUT)
GPIO.setup(LED_BLUE, GPIO.OUT)

red_pwm = GPIO.PWM(LED_RED, 100)
red_pwm = GPIO.PWM(LED_GREEN, 100)
red_pwm = GPIO.PWM(LED_BLUE, 100)

def generatePattern():
	return [random.choice([LED_RED, LED_GREEN, LED_BLUE]) for i in range(6)]

def LEDALLOff():
	GPIO.output(LED_RED, 0)
	GPIO.output(LED_GREEN, 0)
	GPIO.output(LED_BLUE, 0)

def LEDPattern(pattern, time1):
	for i in pattern:
		GPIO.output(i, 1)
		time.sleep(time1)
		GPIO.output(i, 0)
		time.sleep(time1)

def LEDWrong():
	for i in range(3):
		GPIO.output(LED_RED, 1)
		time.sleep(0.5)
		GPIO.output(LED_RED, 0)
		time.sleep(0.5)

def LEDCorrect():
	for i in range(3):
		GPIO.output(LED_GREEN, 1)
		time.sleep(0.5)
		GPIO.output(LED_GREEN, 0)
		time.sleep(0.5)

LEDALLOff()

print("LED 암기 패턴 게임 시작")
time.sleep(1)
print("랜덤하게 생성된 LED가 점등됩니다.")
time.sleep(1)
print("6개의 패턴이 생성됩니다. 암기후 정답을 입력해주세요")
time.sleep(1)
print("아무키나 누르시면 시작합니다.")
input()

print("패턴 생성중..")
pattern = generatePattern()

LEDPattern(pattern, 1)

print("정답을 입력해주세요. 빨강 = 4, 초록 = 5, 파랑 = 6")
player_pattern = [0 for i in range(6)]

for i in range(6):
	player_pattern[i] = int(input())

if pattern == player_pattern:
	print("정답입니다.!")
	LEDCorrect()
else:
	print("오답입니다.!")
	print("정답은 ", pattern, "입니다.")
	LEDWrong()

GPIO.cleanup()
