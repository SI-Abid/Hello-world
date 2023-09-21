l=[]
for _ in range(int(input())):
    l.append(input())
l.sort(key=lambda x: (len(x),x))
if all(l[i] in l[i+1] for i in range(len(l)-1)):
    print('YES')
    print(*l,sep='\n')
else:
    print('NO')