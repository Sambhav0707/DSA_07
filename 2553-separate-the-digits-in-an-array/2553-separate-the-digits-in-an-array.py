class Solution:
    def separateDigits(self, nums: List[int]) -> List[int]:

        def split_digits(n):
            digits = []
            while n > 0:
                digits.append(n % 10)
                n //= 10
            return digits[::-1]

        ans = []
        for num in nums:
            ans += split_digits(num)
        
        return ans

        