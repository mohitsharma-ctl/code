def ispar(x):
    # code here
    stack = list()
    # st = {")":"(","]":"[","}":"{" }
    if len(x)==1 or x[0] in ['}', ')',']']:
        return False
    for i in range(len(x)):
        if x[i] in ['{', '(','[']:
            stack.append(x[i])

        elif x[i] == '}':
            if len(stack)==0:
                return False
            elif stack[-1] != '{':
                return False
            else:
                stack.pop()

        elif x[i] == ')':
            if len(stack) == 0:
                return False
            elif stack[-1] != '(':
                return False
            else:
                stack.pop()
            
        elif x[i] == ']':
            if len(stack) == 0 :
                return False
            elif stack[-1] != '[':
                return False
            else:
                stack.pop()
    if(stack):
        return False
    else:
        return True
        