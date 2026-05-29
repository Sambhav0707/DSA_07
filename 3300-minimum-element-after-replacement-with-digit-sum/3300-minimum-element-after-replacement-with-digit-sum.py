class Solution:
    def minElement(self, nums: List[int]) -> int:
        ans = float("inf")
        for i in range(len(nums)):
            num = nums[i]
            total_sum = 0
            while num > 0:
                # 1. Use % 10 to get the last digit
                digit = num % 10
                
                # 2. Add the digit to the total sum
                total_sum += digit
                
                # 3. Use // 10 to remove the last digit (floor division)
                num = num // 10

            ans = min(ans, total_sum)
        
        return ans

        