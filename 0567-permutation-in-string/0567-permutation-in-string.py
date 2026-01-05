class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        # Brute force0 
        # result_tuple = permutations(s1)

        # for res in result_tuple:
        #     string = "".join(res)

        #     if string in s2:
        #         return True
        
        # return False

        if len(s1) > len(s2):
            return False


        mp = {}

        for ch in s1:
            mp[ch] = 1 + mp.get(ch , 0)

        mp2 = {}

        l = 0
        r = len(s1) - 1

        for i in range(l , r + 1):
            mp2[s2[i]] = 1 + mp2.get(s2[i] , 0)
        

        while r < len(s2):
            if mp == mp2:
                return True
            mp2[s2[l]] -= 1
            if mp2[s2[l]] <= 0:
                mp2.pop(s2[l])
            
            l += 1
            r += 1
            if r < len(s2):
                mp2[s2[r]] = 1 + mp2.get(s2[r] , 0)
        
        if mp == mp2:
            return True
        return False
            



        

                
           

        return False




            
            
                
        