def MOD(a,b,m):
    return (a%m+b%m)%m

mod=1000000007

s=input()
h=[]
for i in range(len(s)):
    if i==0:
        h.append(ord(s[i])-96)
    else:
        h.append(MOD(h[i-1],((ord(s[i])-96)*(31**i)),mod))
    

# print(h)

# reverse hash
t=input()
hash_t=0
for i in range(len(t)):
    hash_t=MOD(hash_t,(ord(t[i])-96)*(31**i),mod)
        
# print(hash_t)

for i in range(len(t)-1,len(h)):
    if i==len(t)-1 and h[i]==hash_t:
        print('found at',i+1)
        

    elif hash_t== ((h[i]-h[i-len(t)])*pow(31**(i-len(t)+1),mod-2,mod))%mod:
        print('found at',i-len(t)+2)


else:
    print('not found')