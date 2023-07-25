for _ in range(int(input())):
    a = ''
    for i in range(8):
        line = input()
        a += line.replace('.', '')
    print(a)
