class Solution:
    def canBeTypedWords(self, text: str, brokenLetters: str) -> int:
        ans = text.split()
        tag = False
        count = 0

        for i in range(len(ans)):
            r = 0
            while r < len(ans[i]):
                if ans[i][r] in brokenLetters:
                    tag = True
                    break
                r += 1
            if tag:
                tag = False
            else:
                count += 1    
                
        
        return count



        