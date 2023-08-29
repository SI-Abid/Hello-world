n = int(input())
if n == 1:
    print(input())
    exit()
l = list(sorted(list(map(int, input().split())), reverse=True))
ans = (l[0] + l[1]) * n
for i in range(2, n):
    ans += l[i] * (n - i + 1)
print(ans)
