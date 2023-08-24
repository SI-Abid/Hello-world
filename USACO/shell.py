with open("shell.in","r") as f:
	count=dict()
	shells=[0,1,2,3]
	for _ in range(int(f.readline())):
		a,b,g=map(int,f.readline().split())
		shells[a],shells[b] = shells[b],shells[a]
		if shells[g] in count:
			count[shells[g]]+=1
		else:
			count[shells[g]]=1
	with open('shell.out','w') as ff:
		ff.write(str(max(count[x] for x in count.keys())))

