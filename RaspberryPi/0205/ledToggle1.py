from flask import Flask
import RPi.GPIO as GPIO     # flask모듈을 불러옴
GPIO.setmode(GPIO.BCM)      #라즈베리파이 GPIO 관련 모듈을 불러옴 

red_pin = 4     #각 LED 핀의 번호를 설정
green_pin = 5
blue_pin = 6

GPIO.setup(red_pin, GPIO.OUT)       #각 LED 핀을 출력 설정
GPIO.setup(green_pin, GPIO.OUT)
GPIO.setup(blue_pin, GPIO.OUT)

app = Flask(__name__) # Flask 라는 이름의 객체 생성 

@app.route('/') #기본 주소
def hello():    #해당 주소에서 실행되는 함수 정의 
    return "LED 제어를 위해 주소창을 변경해주세요."
# 반드시 return 값이 있어야하며, 해당 값을 화면에 보여줌

@app.route('/red_on')   # red LED 켜기
def red_on():           # red LED 켜기 함수 이름 정의
    GPIO.output(red_pin, GPIO.HIGH)     #red LED 출력을 HIGH로 설정
    return "red LED on"                 

@app.route('/green_on')   # red LED 켜기
def green_on():           # red LED 켜기 함수 이름 정의
    GPIO.output(green_pin, GPIO.HIGH)     #red LED 출력을 HIGH로 설정
    return "green LED on"                 

@app.route('/blue_on')   # red LED 켜기
def blue_on():           # red LED 켜기 함수 이름 정의
    GPIO.output(blue_pin, GPIO.HIGH)     #red LED 출력을 HIGH로 설정
    return "blue LED on"                 

@app.route('/off')
def off():
    GPIO.output(red_pin, GPIO.LOW)
    GPIO.output(green_pin, GPIO.LOW)
    GPIO.output(blue_pin, GPIO.LOW)
    return "LED all off"

@app.route('/cleanup')
def cleanup():
    GPIO.cleanup()
    return "clean up"

if __name__ == "__main__":
    app.run(host = "192.168.0.169", port="80")