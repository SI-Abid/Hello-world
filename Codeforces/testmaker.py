with open('test.txt', 'w') as f:
    f.write(' '.join([str(i) for i in range(1,200000)]))