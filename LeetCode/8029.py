from typing import List


class Solution:
    def numberOfPoints(self, nums: List[List[int]]) -> int:
        points = [0]*101
        for i,j in nums:
            for x in range(i,j+1):
                points[x]=1
        points.count(1)