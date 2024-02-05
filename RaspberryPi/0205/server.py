import RPi.GPIO as GPIO
from flask import Flask

app = Flask(__name__)

@app.route('/')
def hello():
    return "Hello Flask!!"

if __name__ == "__main__":
    app.run("192.168.0.169", port = "8080")
    