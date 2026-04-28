class Solution:
    def getMinDistance(self, nums: List[int], target: int, start: int) -> int:
        dist = float("inf")
        for i , num in enumerate(nums):
            if num == target:
                dist = min(dist , abs(i - start))
        return dist
        