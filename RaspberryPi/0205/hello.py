from flask import Flask, render_template, url_for, redirect
from gpiozero import LEDBoard

app = Flask(__name__)

leds = LEDBoard(4, 5, 6)

led_states = {'red':0, 'green':0, 'blue':0}
# 0을 1로 변경하기 실행하기

@app.route('/')
def home():
	return render_template('index.html', led_states=led_states)

@app.route('/<color>/<int:state>')
def led_switch(color, state):
	led_states[color] = state
	leds.value=tuple(led_states.values())
	return redirect(url_for('home'))

@app.route('/all/<int:state>')
def all_on_off(state):
	if state == 0:
		led_states['red'] =0
		led_states['green'] =0
		led_states['blue'] =0
	elif state == 1:
		led_states['red'] =1
		led_states['green'] =1
		led_states['blue'] =1
	leds.value = tuple(led_states.values())
	return redirect(url_for('home'))
	


#@app.route('/<username>')
#def hello_user(username):
#	return render_template('index.html', user=username)

#@app.route('/about')
#def about():
#	return 'This is about page'

#@app.route('/contack')
#def contact():
#	return 'This is contact page'

if __name__ == '__main__':
	app.run(debug=True, port=80, host='0.0.0.0')
