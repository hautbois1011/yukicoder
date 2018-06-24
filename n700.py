N = int(input().split()[0])

found = False
for i in range(N):
    if input().find('LOVE') != -1:
        found = True
        break

if found:
    print('YES')
else:
    print('NO')
