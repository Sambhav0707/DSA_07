class Solution:
    def countOppositeParity(self, nums: list[int]) -> list[int]:
        answer = [0] * len(nums)
        odd = 0
        even = 0

        if nums[len(nums) - 1] % 2 == 0:
            even += 1
        else:
            odd += 1

        for i in range(len(nums) - 2 , -1,-1):
            if nums[i] % 2 == 0:
                answer[i] = odd
                even += 1
            else:
                answer[i] = even
                odd += 1
        
        return answer



        