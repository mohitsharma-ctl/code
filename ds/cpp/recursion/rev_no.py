sum_ = 0

def rev_no(x):
    global sum_
    if x>0:
        rem = x%10
        sum_ = (sum_*10) + rem
        rev_no(x//10)
    return sum_


print(rev_no(12401))
