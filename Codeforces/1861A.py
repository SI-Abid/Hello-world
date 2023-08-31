for _ in range(int(input())):
    s=input()
    # 237 327 273 372 723 732
    if s.index('2')<s.index('3'):
        print(23)
    elif s.index('3')<s.index('7'):
        print(37)
    elif s.index('7')<s.index('3'):
        print(73)
    else:
        print(-1) 