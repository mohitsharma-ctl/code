import sys
# For getting input from input.txt file
sys.stdin = open('input.txt','r')
 # Printing the Output to output.txt file
sys.stdout = open('output.txt','w')


permute_string = []


def permute(input,output):
    if len(input)==0:
        permute_string.append(output)
        return
    if(48<=ord(input[0])<=57):
        permute(input[1:],output+input[0])
    else:
        permute(input[1:],output+input[0].upper())
        permute(input[1:],output+input[0].lower())

permute('abc1','')

print(permute_string)




""" ['ABC1', 'ABc1', 'AbC1', 'Abc1', 'aBC1', 'aBc1', 'abC1', 'abc1']  """