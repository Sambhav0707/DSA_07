class Solution:
    def maxValue(self, nums: List[int]) -> List[int]:
        n = len(nums)

        prefix_max = [0] * n
        sufix_min = [0] * n
        res = [0] * n

        prefix_max[0] = nums[0]

        for i in range(1 , n):
            prefix_max[i] = max(prefix_max[i-1] , nums[i])
        
        sufix_min[-1] = nums[-1]

        for i in range(n-2,-1,-1):
            sufix_min[i] = min(sufix_min[i+1] , nums[i])

        res[-1] = prefix_max[-1]

        for i in range(n-2 , -1 , -1):
            if prefix_max[i] > sufix_min[i+1]:
                res[i] = res[i+1]
            else:
                res[i] = prefix_max[i]
        
        return res


        