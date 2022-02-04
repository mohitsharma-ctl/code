import sys
# For getting input from input.txt file
sys.stdin = open('input.txt','r')
 # Printing the Output to output.txt file
sys.stdout = open('output.txt','w')

sys.setrecursionlimit(10**9)

def sum_digit(n):
    if n==0:
        return 0 
                  #recr func will return the result of rest of digits
    return n%10 + sum_digit(n//10)
        #rem will be added with the rest of recr func

print(sum_digit(123))