class Solution:
    def search(self, nums: List[int], target: int) -> int:
        low = 0
        h = len(nums) - 1

        while low <= h:
            mid = (low + h) // 2

            if nums[mid] == target:
                return mid
            
            if nums[low] <= nums[mid]:
                if nums[low] <= target < nums[mid]:
                    h = mid - 1
                else:
                    low = mid + 1
            else:
                if nums[mid] < target <= nums[h]:
                    low = mid + 1
                else:
                    h = mid - 1
        
        return -1

        