from math import ceil
from math import sqrt
from math import floor

m = int(input())
n = ceil(sqrt(m))
o = ceil(m / n)
print(2 * (n + o))
