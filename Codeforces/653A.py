input()
balls = list({int(x) for x in input().split()})
balls.sort()
for i in range(len(balls) - 2):
    if balls[i] + 2 == balls[i + 1] + 1 == balls[i + 2]:
        print("YES")
        break
else:
    print("NO")
