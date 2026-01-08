class Solution:
    def minWindow(self, s: str, t: str) -> str:
        # if len(t) > len(s):
        #     return ""
        # result = float("inf")
        # mp = {}
        # ans = ""

        # for i in range(len(t)):
        #     mp[t[i]] = 1 + mp.get(t[i] , 0)
        
        

        # for i in range(len(s)):
        #     mp2 = mp.copy()
        #     for j in range(i , len(s)):
        #         if s[j] in mp2:
        #             mp2[s[j]] -= 1

        #             if mp2[s[j]] == 0:
        #                 mp2.pop(s[j])
                
        #         if len(mp2) == 0:
        #             if (j - i + 1) < result:
        #                 result = j - i + 1
        #                 ans = s[i:j + 1]
                     
        
        # return ans

        # optimise solution :- TC:- O(m + n) and SC:- O(1)

        countT , currentWindow = {} , {}

        for c in t:
            countT[c] = 1 + countT.get(c , 0)
        
        have , need = 0 , len(countT)
        res , resLen = [-1,-1] , float("inf")

        l = 0

        for r in range(len(s)):
            c = s[r]

            currentWindow[c] = 1 + currentWindow.get(c , 0)

            if c in countT and currentWindow[c] == countT[c]:
                have += 1
            
            while have == need:
                if (r - l + 1) < resLen:
                    resLen = r - l + 1
                    res = [l , r]
                

                currentWindow[s[l]] -= 1

                if s[l] in countT and currentWindow[s[l]] < countT[s[l]]:
                    have -= 1
                
                l += 1 
            
        l , r = res

        return s[l : r + 1] if resLen != float("inf") else ""
            


            

        



        