class Solution:
    def isTrionic(self, nums: List[int]) -> bool:
        first = 0
        sec = 1
        p = -1
        q = -1
        count = 0

        for third in range(2, len(nums)):
            if count > 2:
                return False
            
            if nums[first] == nums[sec] or nums[sec] == nums[third]:
                return False
            
            if nums[first] < nums[sec] and nums[sec] > nums[third]:
                count += 1
                p = sec
            elif nums[first] > nums[sec] and nums[sec] < nums[third]:
                count += 1
                q = sec
            
            first = sec
            sec = third
        
        if count == 2 and p < q:
            return True
        
        return False
        