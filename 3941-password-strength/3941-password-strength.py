class Solution:
    def passwordStrength(self, password: str) -> int:
        freq = Counter(password)
        result = 0
        for key , val in freq.items():
            if key.isupper():
                result += 2
            elif key.islower():
                result += 1
            elif key.isdigit():
                result += 3
            else:
                result += 5
        return result
        