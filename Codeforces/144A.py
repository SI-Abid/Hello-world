_=input()
l=[int(i) for i in input().split()]
min,max=min(l),max(l)
first_index_of_max=l.index(max)
last_index_of_min=l[::-1].index(min)
total=first_index_of_max+last_index_of_min
last_index_of_min=len(l)-last_index_of_min-1
if first_index_of_max>last_index_of_min:
    total-=1
print(total)