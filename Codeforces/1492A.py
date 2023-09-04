import math


for _ in range(int(input())):
    p, a, b, c = map(int, input().split())
    ans = 2 * 10**18
    for x in [a, b, c]:
        y = p % x
        if y != 0:
            y = x - y
        ans = min(ans, y)
    print(ans)
