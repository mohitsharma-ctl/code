#flask app to create a weather api
import json , ast

import requests
from flask import Flask , jsonify , request
app =  Flask('__name__')

@app.route('/<int:pin>',methods=['GET'])
def get_weather(pin):
    api = "6e2f1dc2071eeeeee731351ad7263e2a"
    url = "https://api.openweathermap.org/data/2.5/weather?zip={},IN&appid={}".format(pin,api)
    weather = requests.get(url)
    weather_dict = weather.content.decode("UTF-8")
    mydata = ast.literal_eval(weather_dict)
    return   jsonify({
        'weather': mydata,
        'ip':request.remote_addr,
        'user_agent':request.headers.get('User-Agent')
          })

app.run(debug=True)