n, m = [int(i) for i in input().split()]
mine = list()
mine.append('#'*(m+2))
for _ in range(n):
    mine.append('#'+input()+'#')
mine.append('#'*(m+2))
# print(mine)
# check all the . cell for correctness
for i in range(1, n+1):
    for j in range(1, m+1):
        if mine[i][j] == '.':
            #  if any neighbors cell has * than its wrong
            if any(mine[x][y] == '*' for x in range(i-1, i+2) for y in range(j-1, j+2)):
                print('NO')
                exit()
# check all number cell for correctness
for i in range(1, n+1):
    for i in range(1, n+1):
        if mine[i][j].isdigit():
            #  if any neighbors cell has * not equal to its digit
            if sum(mine[x][y] == '*' for x in range(i-1, i+2) for y in range(j-1, j+2)) != int(mine[i][j]):
                print('NO')
                exit()
# check all the * cell for correctness
for i in range(1, n+1):
    for j in range(1, m+1):
        if mine[i][j] == '*':
            #  if any neighbors cell dont have digit
            if any(mine[x][y] == '.' for x in range(i-1, i+2) for y in range(j-1, j+2)):
                print('NO')
                exit()
print('YES')
