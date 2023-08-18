ans=0
for _ in range(int(input())):
    x1,y1,x2,y2=map(int,input().split())
    ans+=(y2-y1+1)*(x2-x1+1)
print(ans)