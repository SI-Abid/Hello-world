points = []
for _ in range(3):
    points.append(tuple(map(int, input().split())))
ans = set()
for i in range(3):
    for j in range(3):
        for k in range(3):
            if i == j or j == k or i == k:
                continue
            ans.add((points[i][0]+points[j][0]-points[k][0],
                     points[i][1]+points[j][1]-points[k][1]))
print(len(ans))
for x, y in ans:
    print(x, y)
