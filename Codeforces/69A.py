x,y,z=[],[],[]
limit=int(input())
for i in range(limit):
    a,b,c=map(int,input().split())
    x.append(a)
    y.append(b)
    z.append(c)

if sum(x)==0 and sum(y)==0 and sum(z)==0:
    print("YES")
else:
    print("NO")
