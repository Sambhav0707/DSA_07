class Solution:
    def isPowerOfThree(self, n: int) -> bool:
        if n == 1:
            return True
        
        if n <= 0:
            return False
        
        num = n / 3

        return self.isPowerOfThree(num)

        
        


        