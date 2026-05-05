class Solution:
    def getAverages(self, nums: List[int], k: int) -> List[int]:
        window_size = 2*k + 1 
        l = 0
        r = 2*k
        i = k

        window_sum = sum(nums[:window_size])
        res = [-1] * len(nums)

        if len(nums) < window_size:
            return res

        res[i] = window_sum // window_size

        i += 1
        r += 1

        while r < len(nums):
            window_sum += nums[r] - nums[l]
            res[i] = window_sum // window_size
            i += 1
            l += 1
            r += 1
            
        return res


        