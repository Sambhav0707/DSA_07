class Solution:
    def canReach(self, s: str, minJump: int, maxJump: int) -> bool:
        n = len(s)
        t = [0] * n
        t[0] = 1
        count = 0
        for i in range(1 , n):
            if i - minJump >= 0:
                count += t[i - minJump]
            if i - maxJump - 1 >= 0:
                count -= t[i - maxJump - 1]
            if count > 0 and s[i] == '0':
                t[i] = 1
        
        return t[n-1] > 0
