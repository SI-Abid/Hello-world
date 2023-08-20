for _ in range(int(input())):
    n = int(input())
    x, y = map(int, input().split())
    ans = 'NO' if x<y else 'YES'
    for __ in range(1, n):
        a, b = map(int, input().split())
        if a < x or b < y or a < b or b-y>a-x:
            ans = 'NO'
        x, y = a, b
    print(ans)
