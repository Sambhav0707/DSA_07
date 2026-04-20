class Solution:
    def coinChange(self, coins: List[int], amount: int) -> int:
        n = len(coins)

        dp = [[0 for _ in range(amount + 1)] for _ in range(n + 1)]

        for i in range(n + 1):
            for j in range(amount + 1):
                if i == 0:
                    dp[i][j] = float("inf") - 1
                elif i > 0 and j == 0:
                    dp[i][j] = 0
                elif i == 1 and j > 0:
                    if  j % coins[0] == 0:
                        dp[i][j] = j // coins[0]
                    else:
                        dp[i][j] = float("inf") - 1
        

        for i in range(2, n + 1):
            for j in range(1 , amount + 1):
                if coins[i-1] <= j:
                    dp[i][j] = min(1+dp[i][j - coins[i-1]] , dp[i-1][j])
                else:
                    dp[i][j] = dp[i-1][j]
        
        if dp[n][amount] == float("inf") - 1:
            return -1
        return dp[n][amount]
        