class Solution:
    def vowelConsonantScore(self, s: str) -> int:
        vowels = ['a' , 'e' , 'i' , 'o' , 'u']
        vc = 0
        cc = 0
        for c in s:
            if c in vowels:
                vc += 1
            else:
                if not c.isdigit() and not c.isspace():
                    cc += 1

        if cc == 0:
            return 0
        
        return vc // cc
        