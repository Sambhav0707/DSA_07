class Solution:
    def minWindow(self, s: str, t: str) -> str:
        # variables declarations
        l = 0
        res = ""
        res_len = float("inf")
        have = 0
        window = defaultdict(int)
        t_char_need_dict = Counter(t)
        t_char_need = len(t_char_need_dict)

        # Sliding window logic
        for r in range(len(s)):
            window[s[r]] += 1

            if s[r] in t_char_need_dict and window[s[r]] == t_char_need_dict[s[r]]:
                have += 1
            
            while have == t_char_need:
                if res_len > r-l+1:
                    res = s[l:r+1]
                    res_len = len(res)
                
                window[s[l]] -= 1

                if s[l] in t_char_need_dict and window[s[l]] < t_char_need_dict[s[l]]:
                    have -= 1
                
                l += 1
        
        return res

            

        