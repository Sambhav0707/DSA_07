class Solution:
    def residuePrefixes(self, s: str) -> int:
        st = set()
        
        count = 0

        for i in range(len(s)):
            st.add(s[i])

            if len(st) == (i + 1) % 3:
                count += 1
        
        return count

        