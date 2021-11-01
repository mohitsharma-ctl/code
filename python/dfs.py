adj_list = {
    "a":["b","c"],
    "b":["d","e"],
    "c":["b","f"],
    "d":[],
    "e":["f"],
    "f":[]
}

color = {}
parent = {}
trav_time  = {}
dfs_output = []


for i in adj_list.keys():
    color[i] = "W"
    trav_time[i] = [-1,-1] 
    parent[i] = None
time  = 0
def dfs_fun(u):
    global time
    color[u] = "G"
    trav_time[u][0] = -1
    dfs_output.append(u)

    for v in adj_list[u]:
        if color[v] == "G":
            parent[v] = u
            dfs_fun(v)
    color[u] = "B"
    trav_time[u][1] = time   
dfs_fun("b")
print(dfs_output)