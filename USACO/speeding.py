with open("speeding.in", "r") as f:
    n, m = map(int, f.readline().split())
    road_lim = []
    for _ in range(n):
        x, y = map(int, f.readline().split())
        for __ in range(x):
            road_lim.append(y)
    car_speed = []
    for _ in range(m):
        x, y = map(int, f.readline().split())
        for __ in range(x):
            car_speed.append(y)
    #   input done
    mx = 0
    curr_limit = road_lim[0]
    curr_speed = car_speed[0]
    for idx in range(100):
        curr_limit = road_lim[idx]
        curr_speed = car_speed[idx]
        if curr_speed > curr_limit:
            mx = max(mx, curr_speed - curr_limit)
    with open("speeding.out", "w") as f:
        f.write(str(mx))
