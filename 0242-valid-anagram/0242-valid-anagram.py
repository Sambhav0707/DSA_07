class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
         s2 = "".join(sorted(s))
         s1 = "".join(sorted(t))
         
         return s1 == s2
        