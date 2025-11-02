class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        l = 0 
        h = len(nums) - 1
        ans = len(nums)

        while l <= h:
            mid = (l+h) // 2

            if nums[mid] >= target:
                ans = mid
                h = mid - 1
            else:
                l = mid + 1


        return ans
        