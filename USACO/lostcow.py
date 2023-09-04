with open("lostcow.in", "r") as f:
    l, r = map(int, f.readline().split())
    ans = 0
    inc = 1
    prev = l
    curr = l + 1
    while True:
        ans += abs(prev - curr)
        print(curr)
        if (curr >= r and r > l) or (curr <= r and r < l):
            ans -= abs(r - curr)
            with open("lostcow.out", "w") as g:
                g.write(str(ans))
            break
        inc *= -2
        prev = curr
        curr = inc + l
