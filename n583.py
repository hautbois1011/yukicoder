N, M = map(int, input().split())
vt = [0]*N
visited = [False]*N
adj = [[] for i in range(N)]
for i in range(M):
    Sa, Sb = map(int, input().split())
    adj[Sa].append(Sb)
    adj[Sb].append(Sa)
    vt[Sa] += 1
    vt[Sb] += 1

def dfs(v):
    if not visited[v]:
        visited[v] = True
        for u in adj[v]:
            if not visited[u]:
                dfs(u)

for i in range(N):
    if vt[i] != 0:
        dfs(i)
        break

connected = True
for i in range(N):
    if vt[i] != 0 and not visited[i]:
        connected = False
        break

if connected and [x%2 for x in vt].count(1) in {0, 2}:
    print('YES')
else:
    print('NO')
