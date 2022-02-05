 def inorderTraversal(root):
    if root==None: return None
    stack   =  [root]
    counter =  [1]      #created additional stack to map the counter
    output = []
    while(len(stack)>0):
        if counter[-1]==1:     #if counter of top of stack is 1 , its a first time visit, means preorder
            counter[-1]+=1
            if stack[-1].left !=None:
                stack.append(stack[-1].left)
                counter.append(1)
        elif counter[-1] ==2:    #if counter of top of stack is 2 , its a second time visit, means inorder
            output.append(stack[-1].val)
            counter[-1]+=1
            if stack[-1].right !=None:   
                stack.append(stack[-1].right)
                counter.append(1)
        elif counter[-1] ==3:   #if counter of top of stack is 3 , its a third time visit, means postorder
            stack.pop()
            counter.pop()
    return output