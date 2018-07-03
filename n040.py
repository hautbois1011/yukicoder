d = int(input())
li = list(map(int, input().split()))
A = 0
B = 0
if d >= 2:
    A = sum(li[2::2])
if d >= 1:
    B = sum(li[1::2])
C = li[0]
D = 2
if A==0:
    D -= 1
    if B==0:
        D -= 1

print(D)
print(" ".join(map(str, [C, B, A][:D+1])))
