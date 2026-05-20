class Solution:
    def findThePrefixCommonArray(self, A: List[int], B: List[int]) -> List[int]:
        n = len(A)
        if n == 1:
            return [1]
        C = [0] * n

        for i in range(n):
            common = set(A[:i+1]) & set(B[:i+1])

            C[i] = len(common)
        
        return C
        