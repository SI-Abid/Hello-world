class Solution:
    def countSymmetricIntegers(self, low: int, high: int) -> int:
        ans = 0
        for num in range(low, high + 1):
            ans += 1 if is_symetric(str(num)) else 0
        return ans


def is_symetric(num: str) -> bool:
    n=len(num)
    if n%2==1:
        return False
    return sum(map(int,num[0:n//2]))==sum(map(int,num[n//2:]))


print(Solution().countSymmetricIntegers(1200,1230))