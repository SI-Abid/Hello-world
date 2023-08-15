n = int(input())
total = sum(range(1, n+1))
for i in range(2, n+1):
    if (total-i) % i == 0:
        print("Yes")
        print(1, i)
        ans = list(range(1, n+1))
        ans.remove(i)
        print(n-1, *ans)
        break
else:
    print("No")
