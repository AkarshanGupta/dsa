def dfs(node):
    visited[node] = True
    print(node)

    for neighbour in graph:
        if not visited[neighbour]:
            dfs(neighbour)