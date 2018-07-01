N = int(input())
K = int(input())
li = []
for i in range(N):
    li.append(int(input()))
print(max(li) - min(li))
