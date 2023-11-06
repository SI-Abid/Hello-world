words = []
for _ in range(int(input())):
    words.append(input())
encoded = input()
msg = '<3' + '<3'.join(words)+'<3'
i = 0
for c in encoded:
    if msg[i] == c:
        i += 1
        if i == len(msg):
            break

print('yes' if i == len(msg) else 'no')
