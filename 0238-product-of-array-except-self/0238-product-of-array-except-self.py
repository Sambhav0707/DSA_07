class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        # result = []

        # for i in range(len(nums)):
        #     num = 1
        #     for j in range(len(nums)):
        #         if  nums[j] == nums[i] and j == i:
        #             continue
        #         num *= nums[j]

        #     result.append(num)

        # return result

        result = [1] * len(nums)

        prefix = 1

        for i in range(len(nums)):
            result[i] = prefix
            prefix *= nums[i]
        
        postfix = 1

        for i in range(len(nums) - 1 , -1 , -1):
            result[i] *= postfix
            postfix *= nums[i]

        return result 



