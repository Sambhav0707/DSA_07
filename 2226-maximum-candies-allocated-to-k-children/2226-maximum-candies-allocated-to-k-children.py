class Solution:
    def maximumCandies(self, candies: List[int], k: int) -> int:
        # n is the number of candies each child can get
        def can_serve_k_children(n):
            total = 0

            for pile in candies:
                total += pile // n
            
            return total >= k
        
        # search space
        l = 0 
        h = max(candies)

        while l < h:
            mid = (l + h + 1) // 2

            if can_serve_k_children(mid):
                l = mid
            else:
                h = mid - 1
        
        return l

        