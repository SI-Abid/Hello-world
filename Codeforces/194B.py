import math


input()
n = list(map(lambda x: ((4*x*(x+1)//math.gcd(4*x, x+1)) // (x+1)) +
         1, map(int, input().split())))
print(*n, sep='\n')
