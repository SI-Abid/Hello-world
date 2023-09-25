total=sum(map(int,input().split()))
print(total//5 if total%5==0 and total>0 else -1)