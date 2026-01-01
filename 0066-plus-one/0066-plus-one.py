class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        l = len(digits) - 1
        carry = 1

        for i in range(l , -1 , -1):
            num = digits[i] + carry 

            if num == 10:
                carry = 1
                digits[i] = 0
            else:
                digits[i] = num
                carry = 0
                break
        
        if carry == 1:
            return [1] + digits

        return digits
            
        