with open("tttt.in", "r") as f:
    solo, team = 0, 0
    game = [[x for x in line.strip()] for line in f.readlines()]
    for row in game:
        sz = len(set(row))
        if sz == 1:
            solo += 1
        if sz == 2:
            team += 1

    # convert the row into column and column into rows
    game = [[row[i] for row in game] for i, col in enumerate(game)]
    for row in game:
        sz = len(set(row))
        if sz == 1:
            solo += 1
        if sz == 2:
            team += 1

    # diagonal check
    if len(set([game[i][i] for i in range(3)])) == 1:
        solo += 1
    if len(set([game[i][i] for i in range(3)])) == 2:
        team += 1

    if len(set([game[i][2-i] for i in range(3)])) == 1:
        solo += 1
    if len(set([game[i][2-i] for i in range(3)])) == 2:
        team += 1

    with open("tttt.out", "w") as f2:
        f2.write(f'{solo}\n{team}\n')
