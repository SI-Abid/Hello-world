for _ in range(int(input())):
    _ = input()
    a = list(map(int, input().split()))
    a.sort()  
    if len(a) <= 2:
        print(*a)
        continue
    diff = [abs(a[i] - a[i - 1]) for i in range(1, len(a))]

    # get 2 highest differences
    # split the array into 3 parts

    max1 = diff.index(max(diff))
    diff[max1] = -1
    max2 = diff.index(max(diff))
    if max1 > max2:
        max1, max2 = max2, max1
    max1 += 1
    left = a[:max1]
    middle = a[max1:max2 + 1]
    right = a[max2 + 1:]

    print(left, middle, right)
