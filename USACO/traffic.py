with open("traffic.in", "r") as f:
    # initial range of traffic. We will modify this range as
    # we go through the highway segments 1 to n. The resulting range
    # will be the range of possible final traffic range
    low, high = -999999999, 999999999

    segments = []
    n = f.readline()
    for line in f.readlines():
        ramp, a, b = line.split()
        segments.append((ramp, int(a), int(b)))

    # empty list to store the resulting ranges.
    answers = []

    # forward iteration to get the traffic range after N mile.
    for ramp, a, b in segments:
        # if there is no ramp, the possible range (a,b) is
        # narrowed to the range given by the sensor.
        if ramp == "none":
            low = max(a, low)
            high = min(b, high)

        # if there is an on-ramp with range (a,b),
        # the new range of possible traffic flows is (low+a,high+b)
        if ramp == "on":
            low += a
            high += b

        # if there is an off-ramp with range (a,b),
        # the new range of possible traffic flows is (low-b,high-a)
        if ramp == "off":
            low -= b
            high -= a
            low = max(low, 0)

    answers.append((low, high))

    # reverse iteration to get the the traffic range prior to 1 mile.
    segments.reverse()

    # initial range of traffic. We will modify this range as
    # we go through the highway segments n to 1. The resulting range
    # will be the range of possible initial traffic range
    low, high = -999999999, 999999999
    for ramp, a, b in segments:
        # if there is no ramp, the possible range (a,b) is
        # narrowed to the range given by the sensor.
        if ramp == "none":
            low = max(a, low)
            high = min(b, high)

        # if there is an off-ramp with range (a,b),
        # the new range of possible traffic flows is (low+a,high+b')
        if ramp == "off":
            low += a
            high += b
        # if there is an on-ramp with range (a,b),
        # the new range of possible traffic flows is (low-b,high-a')
        if ramp == "on":
            low -= b
            high -= a
            low = max(low, 0)

    answers.append((low, high))
    # since we calculated the answer backward we need to reverse it
    # before printing.
    answers.reverse()

    with open("traffic.out", "w") as f2:
        for low, high in answers:
            f2.write(f"{low} {high}\n")
