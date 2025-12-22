class Solution:
    def isPalindrome(self, s: str) -> bool:
        result = "".join(char.lower() for char in s if char.isalnum())

        l = 0
        h = len(result) - 1

        while l<=h:
            if result[l] == result[h]:
                l += 1
                h -= 1
            else:
                return False
        
        return True


        
        