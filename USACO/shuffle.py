with open('shuffle.in', 'r') as f:
    n = int(f.readline())
    order = [int(x)-1 for x in f.readline().split()]
    seq = list(map(int, f.readline().split()))
    for _ in range(3):
        seq = [seq[order[x]] for x in range(n)]
    with open('shuffle.out', 'w') as g:
        g.write('\n'.join(list(map(str, seq))))
