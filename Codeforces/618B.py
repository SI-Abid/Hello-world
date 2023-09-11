a=[]
for _ in range(int(input())):
    x=max(map(int,input().split()))
    while True:
        if x not in a:
            break
        x+=1
    a.append(x)
print(*a)