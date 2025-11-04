class Solution:
    def findPeakElement(self, nums: List[int]) -> int:
        if len(nums) == 1: return 0

        if nums[0] > nums[1] : return 0

        if nums[len(nums) - 1] > nums[len(nums) - 2] : return len(nums) - 1

        l = 1
        h = len(nums) - 2

        while l <= h:
            mid = (l+h) // 2

            if nums[mid] > nums[mid - 1] and nums[mid] > nums[mid + 1]:
                return mid
            elif nums[mid] > nums[mid - 1] :
                l = mid + 1
            else:
                h = mid - 1 
        

        return -1