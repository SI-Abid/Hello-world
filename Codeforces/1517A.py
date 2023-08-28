for _ in range(int(input())):
    n = int(input())
    ans = 0
    digit = 2050
    cof = 1000000000000000
    while n >= digit:
        ans += n // (digit * cof)
        n %= digit * cof
        cof //= 10
    print(ans if n == 0 else -1)
