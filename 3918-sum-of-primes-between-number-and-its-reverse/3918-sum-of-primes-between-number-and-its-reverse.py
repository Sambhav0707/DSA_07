class Solution:
    def sumOfPrimesInRange(self, n: int) -> int:
        r = int(str(n)[::-1])
        def isprime(n)->bool:
            if n <= 1 : return False 
            if n <= 3 : return True
            if n % 2 == 0 or n % 3 == 0: return False

            i = 5

            while i * i <= n:
                if n % i == 0 or n % (i+2) == 0:
                    return False
                i += 6
            
            return True
        total = 0
        for num in range(min(n , r) , max(n , r)+1):
            if isprime(num):
                total += num
        
        return total

        