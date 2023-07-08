# n = int(input())
# a = list()


# def x(i, j): return a[i][j] == '#' and a[i + 1][j] == '#' and a[i -
#                                                                 1][j] == '#' and a[i][j - 1] == '#' and a[i][j + 1] == '#'


# for i in range(n):
#     a.append([c for c in input()])

# for i in range(1, n-1):
#     for j in range(1, n-1):
#         if x(i, j):
#             a[i][j] = a[i + 1][j] = a[i - 1][j] = a[i][j - 1] = a[i][j + 1] = '.'

# print('YES' if all(a[i][j] == '.' for i in range(n)
#       for j in range(n)) else 'NO')
from datetime import datetime

miliseconds = 208903591

print(datetime.fromtimestamp(miliseconds))
