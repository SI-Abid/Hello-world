for _ in range(int(input())):
    input()
    x=input()
    s=input()
    ans=0
    while True:
        if s in x:
            print(ans)
            break
        elif ans>10:
            print(-1)
            break
        ans+=1
        x=x+x