N = int(input())

li = [(2**i)*(5**j) for i in range(N+1) for j in range(N+1)]
for n in sorted(li):
    print(n)
