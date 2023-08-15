for _ in range(int(input())):
    a,b,c,m=[int(x) for x in input().split()]
    if a+b+c-3<m:
        print("NO")
    else:
        print("YES")