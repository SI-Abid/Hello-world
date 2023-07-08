k = int(input())*2
m = dict()

for _ in range(4):
    for c in input():
        if c != '.':
            m[c] = m.get(c, 0) + 1

print('YES' if all(v <= k for v in m.values()) else 'NO')
