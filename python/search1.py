x = [1,2,4,4,5,5,6]

print("Enter the no u want to search")
flag  = 0
no = int(input())
for i in x:
    if(i==no):
        # print("Number has been found")
        flag+=1
    # else:
        # print("No is not in the list")

if(flag):
    print("Number has been found")