# {#1}_C_2*2^{#0} = K

K = int(input())
if K == 0:
    print('1\n0')
else:
    for t in range(1, 31):
        tri = t*(t+1)//2
        if K%tri == 0 and bin(K//tri).count('1') == 1:
            zero = bin(K//tri).count('0') - 1
            print(t+1+zero)
            print("1 "*(t+1) + "0 "*zero)
            break
