class Solution:
    def hasIncreasingSubarrays(self, nums: List[int], k: int) -> bool:
        previous_subarray_len = 0
        current_subarray_len = 1
        double_k = 2*k

        for i in range(1  , len(nums)):
            if nums[i] > nums[i-1]:
                current_subarray_len += 1
            else:
                previous_subarray_len = current_subarray_len
                current_subarray_len = 1
            
            if (current_subarray_len >= k and previous_subarray_len >= k) or current_subarray_len >= double_k:
                return True
        
        return False
        

        