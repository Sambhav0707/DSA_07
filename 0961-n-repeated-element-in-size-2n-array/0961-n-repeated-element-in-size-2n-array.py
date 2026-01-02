class Solution:
    def repeatedNTimes(self, nums: List[int]) -> int:
        nums.sort()

        l = 0
        r = 1

        while r < len(nums):
            if nums[r] == nums[l]:
                return nums[r]
            else:
                l = r
                r += 1
        
        return -1
        