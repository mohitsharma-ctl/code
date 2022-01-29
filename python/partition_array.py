arr = [7,-2,4,1,3,3,8,11,31,13]

pivot = 10
i = 0
j = 0

#  i to end ->unkown
#  j to i > pivot
# 0 to j-1 < pivot 
  
while(i<len(arr)):
  if(arr[i]>pivot):
    i+=1
  else:
    arr[i],arr[j] = arr[j],arr[i]
    i+=1
    j+=1
    

print(arr)