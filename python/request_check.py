import requests
import time
from pprint import pprint

url = "https://api.wazirx.com/api/v2/tickers"


while(True):
    print(requests.get(url))
