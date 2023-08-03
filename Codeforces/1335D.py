for _ in range(int(input())):
    sudoku = [list(map(int, input())) for _ in range(9)]
    for i in range(9):
        sudoku[i][((i*3)%9)+(i//3)] = (sudoku[i][((i*3)%9)+(i//3)] + 1)%9 + 1
    for i in range(9):
        print(*sudoku[i], sep="")
    