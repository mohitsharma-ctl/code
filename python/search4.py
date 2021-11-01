x = [1,2,3,4,5,6,7,8,9,10]
print("enter the no you want to search")
no = int(input())



def binary_search(x):
    low  = 0
    high = len(x)
    mid = int((low + high)//2)
    print(5)
    if(no  ==  x[mid]):
        return mid
    else:
        while(low<high):
            if(no>x[mid]):
                low = mid + 1
                mid = (low + high)//2
            elif(no<x[mid]):
                high = mid - 1
                mid = (low + high)//2
            elif(no==x[mid]):
                return x[mid]

print(binary_search(x))