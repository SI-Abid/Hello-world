n, k = map(int, input().split())
t = input()
if n==1:
    print(t*k)
    exit()
l = 0
for i in range(1, n):
    if t[0:i] == t[n-i:]:
        l = i
print((t[0:n-l]*(k))+t[0:l])