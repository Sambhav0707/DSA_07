class Solution:
    def subarraySum(self, nums: List[int], k: int) -> int:
        prefix_sum = 0

        remainder = defaultdict(int)
        remainder[0] = 1
        count = 0
        for i in range(len(nums)):
            
            prefix_sum += nums[i]
            r = prefix_sum - k 

            if r in remainder:
                    count += remainder[r]
            
            remainder[prefix_sum] += 1
        
        return count
        