class Solution:
    def largestEven(self, s: str) -> str:
        if int(s[len(s) - 1]) % 2 == 0:
            return s

        text = ""

        for i in range(len(s) - 1 , -1 , -1):
            if int(s[i]) == 2:
                text = s[:i+1]
                return text
        
        return ""
            
                
            
        


        