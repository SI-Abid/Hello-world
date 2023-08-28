for _ in range(int(input())):
    a,b,n,s=map(int,input().split())
    pok=s-(n*min(a,s//n))
    print('YES' if pok<=b else 'NO')