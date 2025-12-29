class Solution:
    def maximumCount(self, nums: List[int]) -> int:
        count_n = 0
        count_p = 0

        for i in range(len(nums)):
            if nums[i] == 0:
                continue
            
            if nums[i] > 0:
                count_p += 1
            else:
                count_n += 1
        
        return max(count_p , count_n)
        