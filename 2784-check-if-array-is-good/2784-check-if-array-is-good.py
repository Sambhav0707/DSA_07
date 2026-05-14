class Solution:
    def isGood(self, nums: List[int]) -> bool:
        length = len(nums)
        # finding the 'n' 
        nums.sort()
        n = nums[-1]
        # checking the edge case where nums length is less then base[n] elements
        if n + 1 > length:
            return False
        # traversing from last element and checking the element == n-1 / element == n
        for i in range(length - 1 , -1 , -1):
            if i == length - 1 or i == length - 2:
                if nums[i] == n:
                    continue
                else:
                    return False
            
            if nums[i] == n - 1:
                n -= 1
            else:
                return False
        
        return True
        
        

        

        