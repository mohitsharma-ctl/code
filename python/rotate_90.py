arr = [[1,2,3],[4,5,6],[7,8,9]]


for i in range(len(arr)):
    for j in range(i,len(arr[0])):
        arr[i][j],arr[j][i]= arr[j][i],arr[i][j]   #transpose of array
print(arr)  

for i in range(len(arr)):
    l = 0
    r = len(arr[i])-1
    while(l<=r):
        arr[i][l],arr[i][r] = arr[i][r],arr[i][l]   #reversing each row
        l+=1
        r-=1
print(arr)