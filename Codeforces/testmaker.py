with open("test.txt", "w") as f:
    for i in range(1, 2001):
        f.write(str(i*2) + " ")
