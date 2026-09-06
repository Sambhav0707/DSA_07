class Solution:
    def countRotations(self, s: str, k: int) -> int:
        # counting the total adjacent pairs including last one also 
        total = 0
        for i in range(len(s)):
            if s[i] == s[(i+1) % len(s)]:
                total += 1
        
        # calculating boundary with eqauls 
        equal_boundary = total

        # calculating boundary with dffs 
        different_boundary = len(s) - total
        
        if k == total:
            return different_boundary
        
        if k == total - 1:
            return equal_boundary
        
        return 0
        