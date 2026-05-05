class Solution:
    def isHappy(self, n: int) -> bool:
        def sumofsq(n):
            return sum(int(d)**2 for d in str(n))
        seen = set()

        while n not in seen:
            seen.add(n)

            n = sumofsq(n)

            if n == 1:
                return True
        
        return False

