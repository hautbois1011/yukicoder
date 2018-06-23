N = int(input())

line = list(map(int, input().split()))
line.sort()

ans = 0
for i in range(N):
    ans += abs(i+1 - line[i])

print(ans)
