a, b = map(int, input().split())
if a==b:
    print(abs(2*a**2)**(0.5))
else:
    print(abs(a**2-b**2)**(0.5))
