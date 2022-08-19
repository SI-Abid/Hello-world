s=input()
num=s.split('+')
for n in num:
    for i in range(len(num)-1):
        if num[i] > num[i+1]:
            num[i], num[i+1] = num[i+1], num[i]
out=''
for i in range(len(s)//2):
    out+=num[i]+'+'
out+=num[-1]
print(out)
