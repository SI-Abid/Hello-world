def count_vacation_periods(t):
    for _ in range(t):
        n, k, q = map(int, input().split())
        temperatures = list(map(int, input().split()))

        count = 0
        consecutiveDays = 0

        for temp in temperatures:
            if temp <= q:
                consecutiveDays += 1
            else:
                consecutiveDays = 0

            if consecutiveDays >= k:
                count += consecutiveDays - k + 1

        print(count)


# Read the number of test cases
t = int(input())
count_vacation_periods(t)
