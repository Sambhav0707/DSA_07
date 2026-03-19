class Solution:
    def kthGrammar(self, n: int, k: int) -> int:
        # base condition
        if n == 1 and k == 1:
            return 0
        
        # hypothesis and induction

        mid = pow(2 , n-1) // 2

        if k <= mid:
            return self.kthGrammar(n-1 , k)
        else:
           res = self.kthGrammar(n - 1, k - mid)
           return 1 - res

            
        
        

        