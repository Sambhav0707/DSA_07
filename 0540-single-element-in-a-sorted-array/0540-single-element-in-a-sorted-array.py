class Solution:
    def singleNonDuplicate(self, nums: List[int]) -> int:
        if len(nums) == 1 : return nums[0]

        if nums[0] != nums[1] : return nums[0]

        if nums[len(nums) - 1] != nums[len(nums) - 2] : return nums[len(nums) - 1]

        l = 1
        h = len(nums) - 2

        while l <= h:

            mid = (l+h) // 2

            if nums[mid] != nums[mid - 1] and nums[mid] != nums[mid + 1]:
                return nums[mid]


            if (mid % 2 == 1 and nums[mid] == nums[mid - 1]) or (mid % 2 == 0 and nums[mid] == nums[mid + 1])  :
                l = mid + 1
            else:
                h = mid - 1


        return -1     