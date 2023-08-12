from math import ceil
for _ in range(int(input())):
    n,m,k = map(int,input().split())
    # maximum number of jokers that one can have
    joker = min(m,n//k)
    # minimize the number of jokers other can have by equally distributing
    # some might have 1 more than others, which require us to use ceiling
    other = ceil((m-joker)/(k-1))
    
    print(joker-other)
