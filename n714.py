N = int(input())
seki = [[]]*20
for i in range(N):
    li = input().split()
    if li[0] == '0':
        n, m = int(li[1]), int(li[2])
        tabetai = li[3:]
        seki[n-1] = list(tabetai)
    elif li[0] == '1':
        susi = li[1]
        tottado = False
        for j in range(20):
            if susi in seki[j]:
                seki[j].remove(susi)
                print(j+1)
                tottado = True
                break
        if not tottado:
            print(-1)
    elif li[0] == '2':
        C = int(li[1])
        seki[C-1] = []

