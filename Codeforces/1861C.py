for _ in range(int(input())):
    len = 0
    up = 0
    mem = set()
    for x in input():
        if x == "+":
            len += 1
        elif x == "-":
            len -= 1
            mem.remove(len) if len in mem else 0
            up = min(up, len)
        elif x == "1":
            if mem:
                print("NO")
                break
            else:
                up = max(up, len)
        elif x == "0" and not mem:
            if max(up, 1) >= len:
                print("NO")
                break
            else:
                mem.add(len - 1)
    else:
        print("YES")
