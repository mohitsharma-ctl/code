def preorder(root):
    output = []
    stack = []
    
    stack.append(root)
    while(len(stack)!=0):

        root = stack[-1]
        stack.pop()
        output.append(root.data)
        if root.right:
            stack.append(root.right)
        if root.left:
            stack.append(root.left)
    return output

    # print the root
    # add right element to stack
    # add left element to stack