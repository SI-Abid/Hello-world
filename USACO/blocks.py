def freq(s):
    dic = dict((chr(x), 0) for x in range(ord("a"), ord("z") + 1))
    for c in s:
        dic[c] += 1
    return dic


with open("blocks.in", "r") as f:
    dic = dict((chr(x), 0) for x in range(ord("a"), ord("z") + 1))
    for _ in range(int(f.readline())):
        word1, word2 = f.readline().split()
        dic1 = freq(word1)
        dic2 = freq(word2)
        for k, v in dic.items():
            dic[k] += max(dic1[k], dic2[k])
    with open("blocks.out", "w") as f2:
        for v in dic.values():
            f2.write(f"{v}\n")
