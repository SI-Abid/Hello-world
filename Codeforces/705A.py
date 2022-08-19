n=int(input())
out=''
out+='I hate '
for i in range(2,n+1):
    if(i%2==0):
        out+='that I love '
    else:
        out+='that I hate '
out+='it'
print(out)
