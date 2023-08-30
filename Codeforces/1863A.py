for _ in range(int(input())):
    n,a,k=map(int,input().split())
    s=input()
    if a==n:
        print('YES')
        continue
    x=a
    for i in s:
        a = a+1 if i=='+' else a-1
        if a==n:
            print('YES')
            break
    else:
        if x+s.count('+')>=n:
            print('MAYBE')
        else:
            print('NO')