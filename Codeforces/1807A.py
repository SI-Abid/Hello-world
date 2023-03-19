no_of_test_cases = int(input())
for test in range(no_of_test_cases):
    a, b, c = map(int, input().split())
    if a + b == c:
        print("+")
    else:
        print("-")
