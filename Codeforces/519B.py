input()
a = input().split()
b = input().split()
c = input().split()
[a.remove(x) for x in b]
[b.remove(x) for x in c]
print(*a, *b, sep="\n")
