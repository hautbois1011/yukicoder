mod = 1000000007
N = int(input())
S = 0
for i in range(N):
    C, D = map(int, input().split())
    S = (S + ((((C+1)//2)%mod)*(D%mod))%mod)%mod

print(S)

