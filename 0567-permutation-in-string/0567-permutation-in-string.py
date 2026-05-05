class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        if len(s2) < len(s1):
            return False
        
        window_size = len(s1)
        s1_char_dict = Counter(s1)
        current_window_dict = defaultdict(int) 
        l = 0

        for r in range(len(s2)):
            current_window_dict[s2[r]] += 1

            while r-l+1 > window_size:
                current_window_dict[s2[l]] -= 1

                if current_window_dict[s2[l]] < 1:
                    del current_window_dict[s2[l]]
                
                l += 1


            if current_window_dict == s1_char_dict:
                return True
        
        return False
            
        


        