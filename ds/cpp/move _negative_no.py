arr = [-1,2,-2,4,-9,2,-3]


l = 0
r = len(arr)-1

while(l<=r):
  # when  both are +ve
  #r--
  if(arr[l]>0 and arr[r]>0):
    r-=1

  #when both are -ve
  #l++
  elif(arr[l]<0 and arr[r]<0): 
    l+=1
  #when l is +ve and r is -ve
  #swap
  elif(arr[l]>0 and arr[r]<0):
    arr[l],arr[r] = arr[r],arr[l]
    l+=1
    r-=1
  #when r is +ve and l is -ve
  #l++
  elif(arr[r]>0 and arr[l]<0):
    l+=1


print(arr)