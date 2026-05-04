class Solution:
    def checkSubarraySum(self, nums: List[int], k: int) -> bool:
        prefix_sum = 0

        remainder = {0:-1}

        for i in range(len(nums)):
            prefix_sum += nums[i]

            r = prefix_sum % k 

            if r in remainder:
                if i - remainder[r] >= 2:
                    return True
            else:
                remainder[r] = i
        
        return False

            