import math
S = input()
ans = math.factorial(len(S))
uniq = list(set(S))

for c in uniq:
    ans /= math.factorial(S.count(c))

print(int(ans-1))
