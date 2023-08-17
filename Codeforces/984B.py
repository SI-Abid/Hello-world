n, m = [int(i) for i in input().split()]
mine = list()
mine.append('.'*(m+2))
for _ in range(n):
    mine.append('.'+input()+'.')
mine.append('.'*(m+2))
# print(mine)
# check all the . cell for correctness
for i in range(1, n+1):
    for j in range(1, m+1):
        if mine[i][j] != '*':
            cnt = sum(mine[x][y] == '*' for x in range(i-1, i+2)
                      for y in range(j-1, j+2))
            cek = 0
            if mine[i][j].isdigit():
                cek = int(mine[i][j])
            if cnt != cek:
                print('NO')
                exit()
else:
    print('YES')
