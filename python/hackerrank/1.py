arr = [1,4,4,4,5,3]

def migratoryBirds(arr):
    # Write your code here
    val = {}
    for i in arr:
        if i in val:
            val[i]+=1
        else:
            val[i]=1
    x = max(val.values())
    min_arr = []
    for k in val.keys():
        # print(k)
        if val[k] == x:
            min_arr.append(k)
    return min(min_arr)


print(migratoryBirds(arr))