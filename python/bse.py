import requests


while(True):
    print(requests.get('https://api.bseindia.com/BseIndiaAPI/api/getScripHeaderData/w?Debtflag=&scripcode=532454&seriesid=').content)