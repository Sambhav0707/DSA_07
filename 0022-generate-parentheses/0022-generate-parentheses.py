class Solution:
    def generateParenthesis(self, n: int) -> List[str]:
        op = ""
        result = []
        openB = n
        closeB = n

        def solve(openB , closeB , op , result):
            if openB == 0 and closeB == 0:
                result.append(op)
                return
            
            if openB != 0:
                op1 = op
                op1 += "("
                solve(openB - 1 , closeB , op1 ,result)
            
            if closeB > openB:
                op2 = op
                op2 += ")"
                solve(openB , closeB -1 , op2 ,result)
            
            return
        
        solve(openB , closeB , op , result)

        return result

        