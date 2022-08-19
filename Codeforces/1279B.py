for t in range(int(input())):
    n, t = map(int, input().split())
    a = list(map(int, input().split()))
    id = 0
    for i in range(n):
        if a[i] > a[id]:
            id = i
        t -= a[i]
        if t < 0:
            break

    if t >= 0:
        id = -1 
    print(id + 1)
