def numberOfWays(roads):
    # Write your code here
    n = len(roads) + 1
    adj = [[] for _ in range(n)]
    for i, j in roads:
        adj[i - 1].append(j - 1)
        adj[j - 1].append(i - 1)
    ans = 0
    
    def dfs(x, d):
        dist[x] = d
        for y in adj[x]:
            if dist[y] == -1:
                dfs(y, d + 1)
    

    for i in range(n - 2):
        for j in range(i + 1, n - 1):
            for k in range(j + 1, n):
                dist = [-1 for _ in range(n)]
                dfs(i, 0)
                if dist[j] != dist[k]:
                    continue
                dist = [-1 for _ in range(n)]
                dfs(j, 0)
                if dist[i] == dist[k]:
                    ans += 1
    return ans