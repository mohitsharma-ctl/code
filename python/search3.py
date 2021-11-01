x = [33,21,21,11,7]

print('enter the no you want to search')

no = int(input())

#linear search
flag = 0  
for i in x:
    if(no==i):
        flag+=1
if(flag>0):
    print("no exist in x")
else:
    print("no doesnt exist in x")