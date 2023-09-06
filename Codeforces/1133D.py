import math


n = int(input())
map = dict()
a = [int(x) for x in input().split()]
b = [int(x) for x in input().split()]
zero = 0
for ai, bi in zip(a, b):
    if ai == 0:
        if bi == 0:
            zero += 1
    else:
        g = math.gcd(ai, bi)
        c, d = ai//g, bi//g
        if c < 0:
            c *= -1
            d *= -1
        map[(c, d)] = map.get((c, d), 0)+1

print(max(set(map.values()) | {0})+zero)
