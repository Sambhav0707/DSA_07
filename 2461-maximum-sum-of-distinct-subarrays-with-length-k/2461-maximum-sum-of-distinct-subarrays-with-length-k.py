class Solution:
    def maximumSubarraySum(self, nums: List[int], k: int) -> int:
        current_sum = 0
        result = 0
        count = defaultdict(int)

        l = 0

        for r in range(len(nums)):
            current_sum += nums[r]

            count[nums[r]] += 1

            if r - l + 1 > k:
                count[nums[l]] -= 1
                if count[nums[l]] == 0:
                    count.pop(nums[l])
                current_sum -= nums[l]
                l += 1
            
            if len(count) == k and r - l + 1 == k:
                result = max(result , current_sum)
        
        return result


        