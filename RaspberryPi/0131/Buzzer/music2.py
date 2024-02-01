import RPi.GPIO as GPIO
import time

# 부저 핀 번호
buzzer_pin = 12

# 음계 설정
scale = {
    'C': 261.63,
    'D': 293.66,
    'E': 329.63,
    'F': 349.23,
    'G': 392.00,
    'A': 440.00,
    'B': 493.88
}

# 포켓몬스터 전투 BGM 악보
battle_music = [
    'E', 'E', 'E', 'C', 'E', 'G', 'G',
    'E', 'E', 'E', 'C', 'E', 'G', 'G',
    'E', 'E', 'E', 'C', 'E', 'G', 'G',
    'C', 'C', 'C', 'G', 'E', 'E', 'E', 'C'
]

# GPIO 설정
GPIO.setmode(GPIO.BCM)
GPIO.setup(buzzer_pin, GPIO.OUT)

# 악보 연주
for note in battle_music:
    frequency = scale[note]
    if frequency == 0:
        time.sleep(0.2)  # 음 사이의 간격
    else:
        GPIO.output(buzzer_pin, GPIO.HIGH)
        time.sleep(0.2)  # 음을 연주하는 시간
        GPIO.output(buzzer_pin, GPIO.LOW)
        time.sleep(0.1)  # 음 사이의 간격

# GPIO 정리
GPIO.cleanup()
