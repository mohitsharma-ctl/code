import sys
# For getting input from input.txt file
sys.stdin = open('input.txt','r')
 # Printing the Output to output.txt file
sys.stdout = open('output.txt','w')

sys.setrecursionlimit(10**9)

def xn_power(base,n):
    if n==0:
        return 1
    power = base*xn_power(base,n-1)
    return power


print(xn_power(3,2))