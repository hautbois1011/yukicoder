N = int(input())
li = [i for i in range(N+1)]
li[1] = 0
for j in range(2, N+1):
    if li[j] != 0:
        k = 2
        while j*k <= N:
            li[j*k] = 0
            k += 1
print(sum(li))
