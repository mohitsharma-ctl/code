a = [1,1,2,2,4,4,5,5,5]

def pickingNumbers(a):
    a.sort()
    count = 0
    max_ = 0
    pos = 0
    for i in range(1,len(a)):
        if a[i]-a[pos]<=1:
            count+=1
        else:
            if count>max_:
                max_= count
            pos = i
            count = 1
    if count>max_:
        max_ = count
    return max_



pickingNumbers(a)