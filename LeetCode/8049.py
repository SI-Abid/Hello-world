class Solution:
    def isReachableAtTime(self, sx: int, sy: int, fx: int, fy: int, t: int) -> bool:
        dx=abs(sx-fx)
        dy=abs(sy-fy)
        return max(dx,dy)<=t if dx+dy>0 else t!=1