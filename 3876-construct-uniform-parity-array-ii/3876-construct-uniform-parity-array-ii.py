class Solution:
    def uniformArray(self, nums1: list[int]) -> bool:
        nums1.sort()

        if nums1[0] % 2 != 0:
            return True
        
        for num in nums1:
            if num % 2 != 0:
                return False
        
        return True
        