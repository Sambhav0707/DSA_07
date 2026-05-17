class Solution:
    def canReach(self, arr: List[int], start: int) -> bool:
        def solve(arr:List[int] , start:int):
            # Base condition 
            if start < 0 or start >= len(arr) or arr[start] < 0:
                return False
            if arr[start] == 0:
                return True
            # INduction 
            jump = arr[start]
            arr[start] *= -1

            # Hypothesis
            a = solve(arr , start + jump)
            b = solve(arr , start - jump)

            

            return a or b
        
        return solve(arr ,start)

            
        