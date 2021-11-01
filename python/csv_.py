import csv
with open('btc.csv','w',newline='') as file:
    writer = csv.writer(file)
    writer.writerow(["time",'price'])