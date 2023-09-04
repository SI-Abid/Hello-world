with open("cowsignal.in", "r") as f:
    _, __, k = map(int, f.readline().split())
    with open("cowsignal.out", "w") as ff:
        if k == 1:
            ff.writelines(f.readlines())
            exit()
        for line in f.readlines():
            newline = ""
            for letter in line:
                newline += letter * k
            for _ in range(k):
                ff.write(newline[: -(k - 1)])
