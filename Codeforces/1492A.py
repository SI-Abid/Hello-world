import math


for _ in range(int(input())):
    p, a, b, c = map(int, input().split())
    a = math.ceil(p / a) * a if a < p else a
    b = math.ceil(p / b) * b if b < p else b
    c = math.ceil(p / c) * c if c < p else c
    print(min(a - p, b - p, c - p))
