from bs4 import BeautifulSoup
import requests

# url = "https://www.pivottrading.co.in/scanner/openHighLowScanner.php"


url = requests.get("https://www.pivottrading.co.in/scanner/openHighLowScanner.php")
soup = BeautifulSoup(url.content,'html.parser')
# print(soup.prettify())

table  = soup.find_all('table')

# td = soup.find('tr',{"style":"font-family:Georgia;font-weight:bold;font-size:14px;background:green;color:white"})

#price data contain in table 4 i.e table[4]

# print(len(table[4].find_all('tr')))

# print(table[4])


# print(soup.find_all('button',{'data-transaction_type':"SELL"}))
# print(soup.find_all('button',{'data-transaction_type':"BUY"}))
parent = []
for i in soup.find_all('button',{'data-transaction_type':"SELL"}):
    parent.append(i.parent.parent)


for i in soup.find_all('button',{'data-transaction_type':"BUY"}):
    parent.append(i.parent.parent)



parent = list(set(parent))

print(len(parent))
# print(button_type[0].parent.parent)

# for child in parent[1].children:
    # print(child)


for i in parent:
    print(i)
    print()


#bug - few other values coming inside list


