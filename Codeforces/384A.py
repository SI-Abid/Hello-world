n = int(input())
# 1 2 3 4  5  6 7 8
# 1 2 5 8 13 18
print(n * n // 2 + n % 2)
a = ['C' if i % 2 == 0 else '.' for i in range(n)]


def swap(a):
    for i in range(n):
        if a[i] == '.':
            a[i] = 'C'
        else:
            a[i] = '.'
    return a


for i in range(n):
    print(*a, sep='')
    a = swap(a)
