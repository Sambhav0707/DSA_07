class Solution:
    def minBitwiseArray(self, nums: List[int]) -> List[int]:
        ans = [-1] * len(nums)

        for i in range(len(nums)):
            min_bit = float("inf")
            for j in range(nums[i] + 1):
                if (j | (j + 1)) == nums[i]:
                    if j < min_bit:
                        min_bit = j
                        ans[i] = min_bit
            
            if min_bit == float("inf"):
                ans[i] = -1
                

        return ans
        