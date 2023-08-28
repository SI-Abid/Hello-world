a, b, c = input().split()
a, b, c = sorted([a, b, c])
ans = 2
if a == b == c:
    ans = min(ans, 0)
if a[1] == b[1] == c[1] and int(c[0]) == int(a[0])+2 == int(b[0])+1:
    ans = min(ans, 0)
if a[1] == b[1]:
    x, y = map(int, [a[0], b[0]])
    ans = min(ans, 1 if y-x <= 2 else 2)
if b[1] == c[1]:
    x, y = map(int, [b[0], c[0]])
    ans = min(ans, 1 if y-x <= 2 else 2)
if c[1] == a[1]:
    x, y = map(int, [c[0], a[0]])
    ans = min(ans, 1 if x-y <= 2 else 2)
print(ans)
