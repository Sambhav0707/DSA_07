class Solution:
    def maxProduct(self, nums: List[int]) -> int:
            curr_max = nums[0]
            curr_min = nums[0]
            ans = nums[0]

            for num in nums[1:]:

                curr_max = max(
                    num,
                    curr_max * num,
                    curr_min * num
                )

                curr_min = min(
                    num,
                    curr_max * num,
                    curr_min * num
                )

                #  = temp_max

                ans = max(ans, curr_max)

            return ans
        