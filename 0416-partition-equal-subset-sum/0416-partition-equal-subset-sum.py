class Solution:
    def canPartition(self, nums: List[int]) -> bool:
        # first we will check if the sum of nums is even or odd
        if sum(nums) % 2 != 0:
           return False

        # if it is even then we only have to find one subset which is equal to hald of the sum
        n = len(nums)
        target_sum = sum(nums) // 2

        # now the problem is exactly the same as subset sum
        dp = [[False for _ in range(target_sum + 1)] for _ in range(n + 1)]

        for i in range(n+1):
            dp[i][0] = True
        
        for i in range(1,n+1):
            for j in range(1 , target_sum + 1):
                if nums[i-1] <= j:
                    dp[i][j] = dp[i-1][j - nums[i-1]] or dp[i-1][j]
                else:
                    dp[i][j] = dp[i-1][j]
        
        return dp[n][target_sum]



        