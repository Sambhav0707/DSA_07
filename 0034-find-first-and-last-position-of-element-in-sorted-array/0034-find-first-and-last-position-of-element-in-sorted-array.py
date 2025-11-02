class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        l = 0 
        h = len(nums) - 1
        first = -1

        while l <= h :
            mid = (l+h) // 2

            if nums[mid] == target:
                first = mid
                h = mid - 1
            
            if nums[mid] > target:
                h = mid - 1
            
            if nums[mid] < target:
                l = mid + 1
        
        l = 0
        h = len(nums) - 1
        last = -1
        while l <= h :
            mid = (l+h) // 2

            if nums[mid] == target:
                last = mid
                l = mid + 1
            
            if nums[mid] > target:
                h = mid - 1
            
            if nums[mid] < target:
                l = mid + 1

        return [ first , last]    

        