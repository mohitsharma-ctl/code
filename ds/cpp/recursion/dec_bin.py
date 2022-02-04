import sys
# For getting input from input.txt file
sys.stdin = open('input.txt','r')
 # Printing the Output to output.txt file
sys.stdout = open('output.txt','w')

sys.setrecursionlimit(10**9)


def dec_to_bin(x):
    if x==0:
        return
    else:
        rem = x%2
        dec_to_bin(x//2)
        print('1' if rem==1 else '0')
    return

print(dec_to_bin(6))



