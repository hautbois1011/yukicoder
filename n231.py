N = int(input())
m = 0
mi = 0
for i in range(N):
    G, D = map(int, input().split())
    t = G - 30000*D
    if m < t:
        m = t
        mi = i

A = m*6
if A >= 3000000:
    print("YES")
    print((str(mi+1)+'\n')*5 + str(mi+1))
else:
    print("NO")
