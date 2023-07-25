import math
for _ in range(int(input())):
    n, cc = [int(i) for i in input().split()]
    s = [int(i) for i in input().split()]
    a, b, c = 0, 0, 0
    a = 4*n
    for x in s:
        b += (4*x)
        c += (x*x)
    c -= cc
    d = b*b - 4*a*c
    ans = (-b + math.sqrt(d))/(2*a)
    print(int(ans))