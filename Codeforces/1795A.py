for _ in range(int(input())):
    __ = input()
    a=input()
    b=input()
    for x in reversed(b):
        a+=x
    # a += reversed(b).__str__()
    # print(a)
    cnt = 0
    if len(a) == 2:
        print("YES")
    else:
        cnt = 0
        for i in range(len(a)-1):
            if a[i] == a[i+1]:
                cnt += 1
        if cnt > 1:
            print("NO")
        else:
            print("YES")
