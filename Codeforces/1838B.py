for _ in range(int(input())):
    n = input()
    a = input().split()
    x, y, z = [q+1 for q in (a.index('1'), a.index('2'), a.index(n))]
    if x > z and y > z:
        if x > y:
            print(z, y)
        else:
            print(z, x)
    elif x < z and y < z:
        if x < y:
            print(y, z)
        else:
            print(x, z)
    else:
        print("1 1")
