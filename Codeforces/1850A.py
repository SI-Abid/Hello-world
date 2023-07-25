for _ in range(int(input())):
    a=[int(i) for i in input().split()]
    a.sort()
    if a[1]+a[2]>=10:
        print("YES")
    else:
        print("NO")