import RPi.GPIO as GPIO
import time

buzzer = 12
GPIO.setmode(GPIO.BCM)
GPIO.setup(buzzer, GPIO.OUT)
GPIO.setwarnings(False)

pwm = GPIO.PWM(buzzer, 1.0)
pwm.start(50.0)

scale = [262, 294, 330, 349, 392, 440, 494]
twinkle = [1, 1, 5, 5, 6, 6, 5, 4, 4, 3, 3, 2, 2, 1, \
        5, 5, 4, 4, 3, 3, 2, 5, 5, 4, 4, 3, 3, 2, \
        1, 1, 5, 5, 6, 6, 5, 4, 4, 3, 3, 2, 2, 1]
try:
    for i in range(0, 42):
        pwm.ChangeFrequency(scale[twinkle[i]])
        if i == 6 or i == 13 or i == 20 or i == 27 == i == 34 or i == 41:
            time.sleep(1.0)
        else:
            time.sleep(0.5)
    pwm.stop()

finally:
    GPIO.cleanup()