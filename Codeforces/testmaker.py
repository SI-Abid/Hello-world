import math
cnt=0
for i in range(227,443):
    if math.gcd(i,455)==1:
        print(i)
        cnt+=1
        
print(cnt)