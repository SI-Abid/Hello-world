class Solution:
    def minimumOperations(self, num: str) -> int:
        ans = len(num)
        fo = num.rfind("0") + 1
        if fo != 0:
            ans -= 1
            fa = max(map(lambda x: num[: fo - 1].rfind(x), ["0", "5"])) + 1
            if fa != 0:
                ans = min(ans, len(num) - fo + fo - fa - 1)
        fo = num.rfind("5") + 1
        if fo != 0:
            fa = max(map(lambda x: num[: fo - 1].rfind(x), ["2", "7"])) + 1
            if fa != 0:
                ans = min(ans, len(num) - fo + fo - fa - 1)
        return ans


print(Solution().minimumOperations("2908305"))
