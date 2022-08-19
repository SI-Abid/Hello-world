user=input()
real=""
for word in user:
    if word not in real:
        real = real + word
size = len(real)
if size % 2 == 0:
    print("CHAT WITH HER!")
else:
    print("IGNORE HIM!")
