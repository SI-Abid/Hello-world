for _ in range(int(input())):
    input()
    s = input()
    if 'RL' in s:
        print(0)
    elif 'LR' in s:
        print(s.index('LR') + 1)
    else:
        print(-1)