class Solution:
    def firstStableIndex(self, nums: list[int], k: int) -> int:

        if len(nums) == 1:
            if nums[0] - nums[0] <= k:
                return 0
            
            return -1        

        max_arr = [0] * len(nums)
        max_arr[0] = nums[0]

        for i in range(1, len(nums)):
            if nums[i] > max_arr[i-1]:
                max_arr[i] = nums[i]
            else:
                max_arr[i] = max_arr[i-1]
        
        min_arr = [0] * len(nums)
        min_arr[-1] = nums[-1]
        for i in range(len(nums)-2 , -1 , -1):
            if nums[i] < min_arr[i+1]:
                min_arr[i] = nums[i]
            else:
                min_arr[i] = min_arr[i+1]
        
        smallest_index = float("inf")
        for i in range(len(nums)):
            instability_score = max_arr[i] - min_arr[i]

            if instability_score <= k and i < smallest_index:
                smallest_index = i
        
        if smallest_index != float("inf"):
            return smallest_index
        
        return -1





        