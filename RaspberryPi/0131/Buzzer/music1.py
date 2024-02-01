import RPi.GPIO as GPIO
import time

buzzer = 12
GPIO.setmode(GPIO.BCM)
GPIO.setup(buzzer, GPIO.OUT)
GPIO.setwarnings(False)

pwm = GPIO.PWM(buzzer, 1.0)
pwm.start(50.0)

scale = [262, 294, 330, 349, 392, 440, 494, 523]
music = [1, 3, 1, 6, 2, 4, 1, 6, 2, 1, \
        3, 1, 6, 2, 4, 1, 6, 2, 1, 3, \
        1, 6, 2, 4, 1, 6, 2, 1, 3, 1, \
        6, 2, 4, 1, 6, 2]
try:
    for i in range(0, 35):
        pwm.stop()
        time.sleep(0.05)
        pwm.start(50.0)
        pwm.ChangeFrequency(scale[music[i]])
        if i == 1:
            time.sleep(0.95)
        else:
            time.sleep(0.45)
    pwm.stop()

finally:
    GPIO.cleanup()