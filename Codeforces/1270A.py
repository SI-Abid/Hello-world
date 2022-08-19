t=int(input())
while t>0:
    won=False
    n,k1,k2=input().split()

    a=input().split()
    b=input().split()

    if n in a:
        won=True

    if won:
        print("YES")
    else:
        print("NO")
    t=t-1
