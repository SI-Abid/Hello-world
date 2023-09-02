for _ in range(int(input())):
    input()
    a = list(map(int, input().split()))
    a.sort()
    print("YES" if all(abs(a[i] - a[i - 1]) < 2 for i in range(1, len(a))) else "NO")
