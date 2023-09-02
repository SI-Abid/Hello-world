for _ in range(int(input())):
    n = int(input())
    mp = dict()
    st = []
    for x in map(int, input().split()):
        mp[x] = mp.get(x, 0) + 1
    for k in mp.keys():
        st.append(k)
    st.sort()
    ans = []
    for x in st:
        while mp[x] > 0:
            ans.append(x)
            mp[x] = mp[x] - n + 1
            n -= 1
    print(*ans,st[-1])
