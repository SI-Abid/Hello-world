with open('test.txt', 'r') as f:
    for line in f:
        line=line.replace('\n', '')
        # if line has date in the end
        if line[-5:] == '/2022':
            line='*'+line+'*'
        else:
            print(line)