for _ in range(int(input())):
    a, b, c, m = [int(x) for x in input().split()]
    if a+b+c-3 < m or max(0, 2*max(a, b, c)-a-b-c-1) > m:
        print("NO")
    else:
        print("YES")
