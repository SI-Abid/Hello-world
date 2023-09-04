with open("blist.in", "r") as f:
    milk = [0] * 1000
    f.readline()
    for line in f:
        s, t, b = map(int, line.split())
        for i in range(s - 1, t):
            milk[i] += b
    with open("blist.out", "w") as g:
        g.write(str(max(milk)))
