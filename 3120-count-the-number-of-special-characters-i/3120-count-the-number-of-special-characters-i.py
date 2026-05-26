class Solution:
    def numberOfSpecialChars(self, word: str) -> int:
        st = set(word)

        count = 0

        for i in range(26):

            lower = chr(ord('a') + i)

            upper = chr(ord('A') + i)

            if lower in st and upper in st:
                count += 1

        return count