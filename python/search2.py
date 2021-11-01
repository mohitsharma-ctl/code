x = [1,2,3,4,5,6,7,8]

no = 4

def binary_search():
    low = 0
    high = len(x) - 1
    mid = 0
    while(low<high):
        mid = (low+high)/2
        if(no>mid):
            low = mid+1
        elif:
            high = mid-1
        else:
            return mid