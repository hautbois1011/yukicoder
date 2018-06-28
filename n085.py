N, M, C = map(int, input().split())

if N == 1 or M == 1:
    if N == 2 or M == 2:
        print('YES')
    else:
        print('NO')
else:
    if N%2 == 1 and M%2 == 1:
        print('NO')
    else:
        print('YES')
