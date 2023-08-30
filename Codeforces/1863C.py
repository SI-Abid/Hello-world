for _ in range(int(input())):
    n, k = map(int, input().split())
    a = [int(i) for i in input().split()]
    mex = lambda x, y: x if x not in y else mex(x+1, y)
    cnt=0
    k= k%n if k>n else k
    if k==0:
        k+=1
    for _ in range(k):
        for i in range(n):
            a[i] = mex(0, a)
            cnt+=1
        # print(a)
    print(cnt)
    print(a)