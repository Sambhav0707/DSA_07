class Solution:
    def maxTotalValue(self, nums: List[int], k: int) -> int:
        res =( max(nums) - min(nums)) * k
        return res
        