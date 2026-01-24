class Solution:
    def minPairSum(self, nums: List[int]) -> int:
        l = 0
        r = len(nums) - 1
        nums.sort()
        result = float("-inf")
        while(l < r):
            sum = nums[l] + nums[r]
            result = max(sum , result)

            l += 1

            r -= 1

        return result
            

         