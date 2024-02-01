import RPi.GPIO as GPIO
import time

LED_RED = 4
LED_GREEN = 5
LED_BLUE = 6

GPIO.setmode(GPIO.BCM)
GPIO.setup(LED_RED, GPIO.OUT)
GPIO.setup(LED_GREEN, GPIO.OUT)
GPIO.setup(LED_BLUE, GPIO.OUT)

buzzer = 12                     #buzzet setting
GPIO.setmode(GPIO.BCM)
GPIO.setup(buzzer, GPIO.OUT)
GPIO.setwarnings(False)

def buzzer_initial_sound():
    GPIO.output(buzzer, GPIO.LOW)
    time.sleep(0.1)


pwm = GPIO.PWM(buzzer, 1.0)
pwm.start(50.0)

scale = [262, 294, 330, 349, 392, 440, 494, 523]

list1 = [1, 3, 1, 6, 2, 4, 1, 6, 2, 1]

list2 = [3, 5, 5, 5, 3, 5, 3, 5, 5, 5]

list3 = [1, 1, 5, 5, 6, 6, 5, 4, 4, 3, 3, 2, 2, 1]

def music_play_with_led(music_list):
    for i in range(len(music_list)):
        pwm.stop()
        time.sleep(0.05)
        pwm.start(50.0)
        pwm.ChangeFrequency(scale[music_list[i]])
        if i == 1:
            time.sleep(0.95)
        else:
            time.sleep(0.45)
    pwm.stop()
        
button_pin1 = 22  # button setting
button_pin2 = 23
button_pin3 = 24

GPIO.setwarnings(False)
GPIO.setmode(GPIO.BCM)

GPIO.setup(button_pin1,GPIO.IN)
GPIO.setup(button_pin2,GPIO.IN)
GPIO.setup(button_pin3,GPIO.IN)

while 1:
    buzzer_initial_sound()
    if GPIO.input(button_pin1) == GPIO.LOW:
        print("Button 1 pushed!")
        time.sleep(0.1)
        GPIO.output(LED_RED, GPIO.HIGH)  # 빨간 LED 켜기
        music_play_with_led(list1)
        GPIO.output(LED_RED, GPIO.LOW)  # 빨간 LED 켜기
        

    if GPIO.input(button_pin2) == GPIO.LOW:
        print("Button 2 pushed!")
        time.sleep(0.1)
        GPIO.output(LED_GREEN, GPIO.HIGH)  # 초록 LED 켜기
        music_play_with_led(list2)
        GPIO.output(LED_GREEN, GPIO.LOW)  # 초록 LED 끄기
       

    if GPIO.input(button_pin3) == GPIO.LOW:
        print("Button 3 pushed!")
        time.sleep(0.1)
        GPIO.output(LED_BLUE, GPIO.HIGH)  # 파란 LED 켜기
        music_play_with_led(list3)
        GPIO.output(LED_BLUE, GPIO.LOW)  # 파란 LED 끄기

GPIO.cleanup()


