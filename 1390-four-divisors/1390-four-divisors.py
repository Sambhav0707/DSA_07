class Solution:
    def check(self , n:int):
       divisers = set()
       divisers.add(1)
       divisers.add(n)

       for i in range(2 , int(math.sqrt(n) + 1)):
            if n % i == 0:
                divisers.add(i)
                divisers.add(n // i)
            
            if len(divisers) > 4:
                return 0
        
       if len(divisers) == 4:
            return sum(divisers)
        
       return 0




        
       return res
    def sumFourDivisors(self, nums: List[int]) -> int:

        res = 0

        for i in range(len(nums)):
            total = self.check(nums[i])
            res += total
        
        return res
        