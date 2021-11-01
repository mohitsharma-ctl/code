

def addEdge(graph,u,v,c):
    graph[u][v]=c

print('Mohit Sharma')
print('18C060')
print('DFS:')
print('Enter number of edges',end=":")
edges = int(input())
print('Enter number of vertices',end=":")
vertices = int(input())
graph = [[0 for i in range(vertices)] for j in range(vertices)]
print('Enter the node that have edges and cost:')
for i in range(edges):
    nodes= input()
    edge = nodes.split()
    addEdge(graph,int(edge[0]),int(edge[1]),int(edge[2]))

visited = [False]*vertices
parent = [0]*vertices
print('Enter source node',end=":")
source = int(input())
goal = int(input('Enter the goal state:'))
print('DFS traversal')
stack = []
stack.append(source)
visited[source] = True
while stack:
    s= stack.pop(0)
    print(s,end = " ")
    for i in range(vertices):
        if graph[s][i] > 0:
            if visited[i] == False:
                stack.append(i)
                parent[i]=s
                visited[i]=True
                
print()
cost = 0
stack = []
stack.append(goal)
while goal != source:
    cost += graph[parent[goal]][goal]
    goal = parent[goal]
    stack.append(goal)
print('Solution cost',end=":")
print(cost)
print('Solution path:')
while stack:
    s = stack.pop()
    if len(stack)>0:
        print(s,end="-->")
    else :
        print(s,end=" ")
