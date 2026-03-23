class Solution:
    def letterCasePermutation(self, s: str) -> List[str]:
        result = []

        op = ""

        # this preprocessing ensures that we add all the numbers which are from the begining if they are from the begining 
        i = 0
        while i < len(s) and not s[i].isalpha():
                op += s[i]
                i += 1


        def solve(s:str , op:str):
            if len(s) == 0:
                result.append(op)
                return
            
            op1  = op
            op2  = op

            op1 += s[0].lower()
            op2 += s[0].upper()

            new_s = s[1:]

            i = 0
            numbers =""
            while i < len(new_s) and not new_s[i].isalpha():
                numbers += new_s[i]
                i += 1
            ns = new_s[i:]
            op1 += numbers
            op2 += numbers

            solve(ns , op1)
            solve(ns , op2)

            return
        solve(s[i:] , op)

        return result




        