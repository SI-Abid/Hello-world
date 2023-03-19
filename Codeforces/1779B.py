for _ in range(int(input())):
    n = int(input())
    if n == 3:
        print('NO')
    else:
        print('YES')
        if n % 2 == 0:
            for __ in range(n):
                print(1 if __ % 2 == 0 else -1, '', end='')
        else:
            a, b = n//2, n//2-1
            for __ in range(n):
                print(b if __ % 2 == 0 else -a, '', end='')
        print()
