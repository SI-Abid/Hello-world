data = None
with open("p.txt","r") as f:
    data = set(f.readlines())
with open("p.txt","w") as f:
    f.writelines(data)