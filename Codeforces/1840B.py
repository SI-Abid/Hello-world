def count_dessert_ways(t):
    for _ in range(t):
        n, k = map(int, input().split())

        dp = [0] * (n + 1)
        dp[0] = 1

        for i in range(k):
            for j in range(2 ** i, n + 1, 2 ** i):
                dp[j] += dp[j - 2 ** i]

        print(dp[n])


# Read the number of test cases
t = int(input())
count_dessert_ways(t)
