f=open('word.in','r')
o=open('word.out','w')
n,k=map(int,f.readline().split())
t=f.readline().split()
# print(n,k,t)
cnt=0
line=''
for w in t:
	if cnt+len(w)>k:
		o.write(line.strip()+'\n')
		line=w
		cnt=len(w)
	else:
		line+=' '+w
		cnt+=len(w)
o.write(line.strip()+'\n')
f.close()
o.close()