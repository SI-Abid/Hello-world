from math import ceil
for _ in range(int(input())):
    n = int(input())
    a = [int(x) for x in input().split()]
    if n == 3:
        print(a[1]//2 if a[1] % 2 == 0 else -1)
        continue
    if all(x == 1 for x in a[1:-1]):
        print(-1)
        continue
    ans = 0
    for i in range(1, n-1):
        ans += ceil(a[i]/2)
    print(ans)
