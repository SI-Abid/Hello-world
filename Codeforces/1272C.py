input()  # ignore

s = input()
d = {x: True for x in input().split()}

ans = 0
size = 0
for i, c in enumerate(s):
    if c in d:
        size += 1
    else:
        ans += (size*(size+1)//2)
        size = 0
if size > 0:
    ans += (size*(size+1)//2)
print(ans)
