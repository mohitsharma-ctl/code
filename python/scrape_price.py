import requests
from bs4 import BeautifulSoup
import time

def get_price():
    sec = 0
    while(1):
        y =  int(time.time())
        if(y==sec):
           continue
        else:
            url = "https://secure.icicidirect.com/IDirectTrading/Trading/trading_stock_quote.aspx?Symbol=BHAAIR"
            x = requests.get(url)
            # print(x.content)
            soup = BeautifulSoup(x.content,'html.parser')
            table =  soup.find_all('table')
            # print(table[1])
            sec  = int(time.time())
            td = table[1]
            print(td.find_all('td')[1].text.strip(),y)
            sec = y
            

