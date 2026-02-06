class Solution:
    def minRemoval(self, nums: List[int], k: int) -> int:
        n = len(nums)
        if n == 1:
            return 0
        nums.sort()
        min_removals = float("inf")
        l = 0
        r = 1

        while r < n:

            while r < n and nums[r] <= nums[l] * k:
                min_removals = min(min_removals , (n - (r - l + 1))) 
                r += 1

            l = r
            r += 1

        if min_removals == float("inf"):
            return 0
            
        return min_removals
        