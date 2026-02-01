class Solution:
    def minimumCost(self, nums: List[int]) -> int:
        score = nums[0]
        first_min = float("inf")
        second_min = float("inf")
        for r in range(1,len(nums)):
            if nums[r] < first_min:
                second_min = first_min
                first_min = nums[r]
            elif nums[r] < second_min:
                second_min = nums[r]
            
        
        return score + first_min + second_min


            

        