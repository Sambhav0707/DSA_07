class Solution:
    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        def canEat(k) :
            total_hours = 0
            for pile in piles:
                total_hours += (pile + k - 1) // k
            
            return total_hours <= h
        
        low = 1
        high = max(piles)

        while low < high:
            mid = (low + high) // 2

            if canEat(mid) :
                high = mid
            else:
                low = mid + 1
        
        return low 
        