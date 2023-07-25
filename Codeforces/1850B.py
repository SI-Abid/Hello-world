for _ in range(int(input())):
    ans, mx = 0, 0
    for i in range(int(input())):
        a, b = [int(i) for i in input().split()]
        if a <= 10:
            if b > mx:
                mx = b
                ans = i
    print(ans+1)
