for _ in range(int(input())):
    n = int(input())
    s = input()
    if n == 1:
        print(1 if int(s) % 2 == 1 else 2)
        continue
    if n % 2 == 1:
        if any(int(s[i]) % 2 == 1 for i in range(0, n, 2)):
            print(1)
        else:
            print(2)
    elif any(int(s[i]) % 2 == 0 for i in range(1, n, 2)):
        print(2)
    else:
        print(1)
