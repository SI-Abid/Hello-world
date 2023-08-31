for _ in range(int(input())):
    len = 0
    mem = dict()
    for x in input():
        if x == "+":
            len += 1
        elif x == "-":
            if len == 0:
                print("NO")
                break
            if len in mem:
                mem.pop(len)
            len -= 1
        elif x == "0" and len < 2:
            print("NO")
            break
        elif x == "1":
            if len in mem and mem[len] == 0:
                print("NO")
                break
            for i in range(len):
                mem[i + 1] = 1
        elif x == "0":
            if len in mem and mem[len] == 1:
                print("NO")
                break
            mem[len] = 0
    else:
        print("YES")
