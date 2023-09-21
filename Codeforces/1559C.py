for _ in range(int(input())):
    n = int(input())
    l = input().split()
    ans = [i + 1 for i in range(n)]
    try:
        idx = l.index('1')
        ans.insert(idx,n+1)
    except:
        ans.insert(n,n+1)
    print(*ans)
        
