from flask import Flask, render_template
import RPi.GPIO as GPIO

sw_pin_list=[4,5,6]

GPIO.setmode(GPIO.BCM)
app = Flask(__name__)

GPIO.setup(sw_pin_list[0], GPIO.IN, pull_up_down = GPIO.PUD_DOWN)
GPIO.setup(sw_pin_list[1], GPIO.IN, pull_up_down = GPIO.PUD_DOWN)
GPIO.setup(sw_pin_list[2], GPIO.IN, pull_up_down = GPIO.PUD_DOWN)

sw_state_list = [0,0,0]

@app.route('/')
def home():
    for ii in range(3):
        sw_state_list[ii] = GPIO.input(sw_pin_list[ii])
    return render_template('buttonState.html', sw_state_list=sw_state_list)
    
if __name__ == "__main__":
    app.run(host="192.168.0.169", port = "8080")    
    