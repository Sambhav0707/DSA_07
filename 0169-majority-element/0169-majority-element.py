class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        # mp = {}
        # for i in range(len(nums)):
        #     mp[nums[i]] = mp.get(nums[i] , 0) + 1
        #     if mp[nums[i]] > len(nums) / 2:
        #         return nums[i]

        count = 0
        candidate = float("inf")

        for i in nums:
            if count == 0:
                candidate = i
                count += 1
                continue
            
            if i == candidate:
                count += 1
                continue
            else:
                count -= 1
                
        
        return candidate
            
            
            
        
    
        