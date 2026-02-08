class Solution:
    def dominantIndices(self, nums: List[int]) -> int:
        if len(nums) == 1:
            return 0

        count = 0
        
        total = nums[len(nums) - 1]

        for i in range(len(nums) - 2 , -1 , -1):

            avg = total / (len(nums) - (i + 1))

            if nums[i] > avg:
                count += 1
            
            total += nums[i]
        
        return count

            

        