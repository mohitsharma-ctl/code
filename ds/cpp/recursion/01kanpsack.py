import sys
# For getting input from input.txt file
sys.stdin = open('input.txt','r')
 # Printing the Output to output.txt file
sys.stdout = open('output.txt','w')


wt = [10,20,30]
val = [60,100,120]
n = len(wt)-1
w = 50
def rec(wt,val,w,n):
    if(n==0 or w == 0):
        return 0

    if(wt[n]>w):
        return rec(wt,val,w,n-1)   #if current element weight is greater than given weight
    else:
        return max(val[n]+rec(wt,val,w-wt[n],n-1),rec(wt,val,w,n-1))     #if current element weight is less than given weight 
                                                                        # max of (current weight + remaining weight) and remaining weight if that  weight is not included 

print(rec(wt,val,w,n))