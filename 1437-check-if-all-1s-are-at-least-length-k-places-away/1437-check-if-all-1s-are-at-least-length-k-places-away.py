class Solution:
    def kLengthApart(self, nums: List[int], k: int) -> bool:
        first = -1

        for i , v in enumerate(nums):
            if v == 1:
                first = i
                break
        
        i = first + 1

        while i < len(nums):
            sec = -1

            if nums[i] == 1:
                sec = i
                if (sec - first + 1) >= k + 2:
                    first = sec
                else:
                    return False
            
            i += 1
        
        return True

        