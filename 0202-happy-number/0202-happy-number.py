class Solution:
    def isHappy(self, n: int) -> bool:
        def sumofsq(n):
            return sum(int(d)**2 for d in str(n))
        slow = n
        fast = sumofsq(n)

        while fast != 1 and fast != slow:
            slow = sumofsq(slow)
            fast = sumofsq(sumofsq(fast))
        
        return fast == 1

