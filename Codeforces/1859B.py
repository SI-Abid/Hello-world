for _ in range(int(input())):
    a, b = [], []
    for i in range(int(input())):
        input()
        tmp = [int(x) for x in input().split()]
        tmp = sorted(tmp)
        a.append(tmp[0])
        b.append(tmp[1])
    print(sum(b)-min(b)+min(a))
