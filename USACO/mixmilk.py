with open('mixmilk.in','r') as f:
	c=[]
	m=[]
	for _ in range(3):
		ci,mi=map(int,f.readline().split())
		c.append(ci)
		m.append(mi)
	for cycle in range(4):
		milk = min(m[cycle%3],c[(cycle+1)%3]-m[(cycle+1)%3])
		m[cycle%3]-=milk
		m[(cycle+1)%3]+=milk
	with open('mixmilk.out','w') as ff:
		ff.writelines(str(milk)+'\n' for milk in m)
