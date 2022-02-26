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

    permute(input[1:],output+input[0].upper())
    permute(input[1:],output+input[0])

permute('abc','')

print(permute_string)


"""['ABC', 'ABc', 'AbC', 'Abc', 'aBC', 'aBc', 'abC', 'abc']"""