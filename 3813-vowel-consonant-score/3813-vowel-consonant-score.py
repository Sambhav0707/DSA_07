class Solution:
    def vowelConsonantScore(self, s: str) -> int:
        vowels = ['a' , 'e' , 'i' , 'o' , 'u']
        digits = ['1' , '2' , '3' , '4' , '5' , '6' , '7' , '8' , '9' , '0']
        vc = 0
        cc = 0
        for c in s:
            if c in vowels:
                vc += 1
            elif c in digits or c == ' ' :
                continue
            else:
                cc += 1
                    
        if cc == 0:
            return 0
        
        return vc // cc
        