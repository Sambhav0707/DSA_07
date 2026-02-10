class Solution:
    def arrayPairSum(self, nums: List[int]) -> int:
        n = len(nums)

        if n == 1:
            return nums[0]
        
        nums.sort()
        l = 0
        r = 1
        result = 0
        while r < n:
            min_sum = min(nums[l] , nums[r])
            result += min_sum
            l += 2
            r += 2
        
        return result

             


        