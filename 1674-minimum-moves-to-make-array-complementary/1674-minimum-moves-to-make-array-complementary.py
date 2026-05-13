class Solution:
    def minMoves(self, nums: List[int], limit: int) -> int:
        n = len(nums)

        # making moves array for target sums in range 0 -> 2 * limit + 2
        moves = [0] * (2 * limit + 2) 

        for i in range(n//2):
            a = min(nums[i] , nums[n-1-i])
            b = max(nums[i] , nums[n-1-i])

            target = a+b

            moves[2] += 2
            moves[2 * limit + 1] -= 2

            moves[a + 1] -= 1
            moves[b + limit + 1] += 1

            moves[target] -= 1
            moves[target + 1] += 1
        
        ans = float("inf")
        prefix_moves = 0
        for target_sum in range(2 , 2 * limit + 1):
            prefix_moves += moves[target_sum]
            ans = min(ans , prefix_moves)
        
        return ans

        