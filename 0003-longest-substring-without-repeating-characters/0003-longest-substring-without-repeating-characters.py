class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        st = set()
        l , r = 0 , 0
        max_len = 0
        while r < len(s):

            while s[r] in st and l <= r:
                st.remove(s[l])
                l += 1
            
            st.add(s[r])
            max_len = max(max_len , r-l+1)
            r += 1
        
        return max_len

        