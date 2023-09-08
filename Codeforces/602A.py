n, x = map(int, input().split())
a = [int(x) for x in input().split()]
m, y = map(int, input().split())
b = [int(x) for x in input().split()]
a.reverse()
b.reverse()
n = 0
m = 0
for i, k in enumerate(a):
    n += k * (x**i)
for i, k in enumerate(b):
    m += k * (y**i)
print("=" if n == m else ">" if n > m else "<")
