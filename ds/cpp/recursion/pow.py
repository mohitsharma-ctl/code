import sys
# For getting input from input.txt file
sys.stdin = open('input.txt','r')
 # Printing the Output to output.txt file
sys.stdout = open('output.txt','w')

sys.setrecursionlimit(10**9)

def two_power(n):
    if n==0:
        return 1
    power = 2*two_power(n-1)
    return power


print(two_power(16))