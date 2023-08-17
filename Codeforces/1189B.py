input()
a = [int(i) for i in input().split()]
a = sorted(a)
x,y,z = a[-3],a[-2],a[-1]
if z>=x+y:
    print("NO")
else:
    print("YES")
    print(*a[:-3], y,z,x)