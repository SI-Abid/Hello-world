import math
for _ in range(int(input())):
    n=int(input())
    print(2)
    s=n
    for i in range(n-1,0,-1):
        print(s,i)
        s=math.ceil((s+i)/2)