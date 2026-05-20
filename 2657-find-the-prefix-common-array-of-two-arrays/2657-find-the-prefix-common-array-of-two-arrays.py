class Solution:
    def findThePrefixCommonArray(self, A: List[int], B: List[int]) -> List[int]:
        n = len(A)
        # if n == 1:
        #     return [1]
        # C = [0] * n

        # for i in range(n):
        #     common = set(A[:i+1]) & set(B[:i+1])

        #     C[i] = len(common)
        
        # return C
        m = n + 1
        freq_list = [0] * m
        result = [0] * n
        count = 0
        for i in range(n):
            freq_list[A[i]] += 1

            if freq_list[A[i]] == 2:
                count += 1
            
            freq_list[B[i]] += 1

            if freq_list[B[i]] == 2:
                count += 1
            
            result[i] = count
        
        return result

        