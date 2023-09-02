def next_time(time, hh, mm):
    ch, cm = map(int, time.split(":"))
    cm += 1
    return str((ch + (cm // mm)) % hh).rjust(2, "0") + ":" + str(cm % mm).rjust(2, "0")


def is_valid(t, hh, mm):
    time = ""
    for i, x in enumerate(reversed(t)):
        time += mp[x]
    ch, cm = map(int, time.split(":"))
    return ch < hh and cm < mm


mp = {"0": "0", "1": "1", "8": "8", ":": ":", "2": "5", "5": "2"}

for _ in range(int(input())):
    hh, mm = map(int, input().split())
    time = input()
    while True:
        if all(x in mp.keys() for x in time) and is_valid(time, hh, mm):
            print(time)
            break
        else:
            time = next_time(time, hh, mm)
