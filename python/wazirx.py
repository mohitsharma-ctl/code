import requests
import json
import time
import csv
import threading

url = "https://api.wazirx.com/api/v2/tickers"

def fetch_data(url):
    price = []
    data = requests.get(url)
    ticker = data.json()
    price.insert(0,ticker["btcinr"]["at"])
    price.insert(1,ticker["btcinr"]["sell"])   
    with open('btc.csv','a',newline='') as csvfile:
        writer = csv.writer(csvfile)
        writer.writerow(price)
while(1):
    # t1 = threading.Thread(target=fetch_data, args=(url,))
    # 
    # t2 = threading.Thread(target=fetch_data, args=(url,)) 
    # 
    # t3 = threading.Thread(target=fetch_data, args=(url,)) 
    fetch_data(url)
    # # t1.start()
    # # time.sleep(0.1) 
    # # t2.start()
    # # time.sleep(0.1) 
    # # t3.start()
    # # time.sleep(0.1) 
    # t1.join()
    # t2.join()
    # t3.join()
    # fetch_data(url)
    