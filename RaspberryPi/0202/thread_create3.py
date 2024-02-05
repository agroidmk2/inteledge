import RPi.GPIO as GPIO
import threading
import time

def thread_led_blink():
    led_pin = 4

    GPIO.setmode(GPIO.BCM)
    GPIO.setup(led_pin, GPIO.OUT)

    while True:
        GPIO.output(led_pin, GPIO.HIGH)
        time.sleep(0.5)
        GPIO.output(led_pin, GPIO.LOW)
        time.sleep(0.5)

def main():
    GPIO.setwarnings(False)
    GPIO.cleanup()
    threading.Thread(target=thread_led_blink).start()
    try:
        while True:
            print("main")
            time.sleep(1)
    except KeyboardInterrupt:
        GPIO.cleanup()

if __name__ == "__main__":
    main()
