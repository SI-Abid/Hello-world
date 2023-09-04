def cost(a: list) -> int:
    return sum(x * i for i, x in enumerate(a))


with open("cbarn.in", "r") as f:
    n = int(f.readline())
    cows = [int(x) for x in f.readlines()]
    ans = 99999999999
    for _ in range(n):
        ans = min(ans, cost(cows))
        cows.insert(0, cows.pop())
    with open("cbarn.out", "w") as f2:
        f2.write(f"{ans}\n")
