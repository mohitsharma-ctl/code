import requests
import json
import time
import csv
import threading
url = "https://api.wazirx.com/api/v2/tickers"
universal_time = 0
def fetch_data(url):
    global universal_time
    price = []
    data = requests.get(url)
    ticker = data.json()
    time_in_second = time.strftime('%Y-%m-%d %H:%M:%S', time.localtime(ticker["btcinr"]["at"]))
    price.insert(0,time_in_second)
    price.insert(1,ticker["btcinr"]["sell"])
    if(universal_time!=ticker["btcinr"]["at"]):   
        with open('btc.csv','a',newline='') as csvfile:
            writer = csv.writer(csvfile)
            writer.writerow(price)
            universal_time=ticker["btcinr"]["at"]

while(1):

    fetch_data(url)
    # time.sleep(1)    