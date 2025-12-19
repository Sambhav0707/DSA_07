class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        if len(nums) == 0:
            return 0
        if len(nums) == 1:
            return 1
            
        nums.sort()
        count = 1
        max_len = float('-inf')
        for i in range(1 , len(nums)):
            if nums[i-1] == nums[i]:
                continue
            if nums[i-1] == nums[i] - 1:
                count += 1
            else:
                count = 1
            max_len = max(max_len , count)
            
        if max_len == float('-inf'):
            return 1
        return max_len


        