class Solution:
    def minElement(self, nums: List[int]) -> int:
        result = []
        for num in nums:
            total_sum = 0
            while num > 0:
                # 1. Use % 10 to get the last digit
                digit = num % 10
                
                # 2. Add the digit to the total sum
                total_sum += digit
                
                # 3. Use // 10 to remove the last digit (floor division)
                num = num // 10

            result.append(total_sum)
        
        result.sort()
        return result[0]

        