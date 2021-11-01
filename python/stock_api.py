import time
from bs4 import BeautifulSoup
#flask app to create a weather api
import json , ast
import requests
from flask import Flask , jsonify , request
app =  Flask('__name__')

@app.route('/<code>',methods=['GET'])
def get_weather(code):
    # api = "6e2f1dc2071eeeeee731351ad7263e2a"
    url = "https://secure.icicidirect.com/IDirectTrading/Trading/trading_stock_quote.aspx?Symbol=BHAAIR"
    x = requests.get(url)
    soup = BeautifulSoup(x.content,'html.parser')
    table =  soup.find_all('table')
    # print(table[1])
    sec  = int(time.time())
    td = table[1]
    price =  td.find_all('td')[1].text.strip()        
    
    return   jsonify({
    'price': price,
    'code':code,
    'ip':request.remote_addr,
    'time': sec,
    'user_agent':request.headers.get('User-Agent')
      })

app.run(debug=True)