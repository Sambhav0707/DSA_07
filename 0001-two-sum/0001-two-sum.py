class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        mp = {}

        for i in range(len(nums)):
            if (target - nums[i]) in mp:
                return [i , mp[target - nums[i]] ]

            mp[nums[i]] = i
        
        return []
        