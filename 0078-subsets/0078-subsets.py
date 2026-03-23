class Solution:
    def subsets(self, nums: List[int]) -> List[List[int]]:
        result = []
        def solve(nums:List[int] , output):
            if len(nums) == 0:
                result.append(output)
                return output
            
            op1 = output.copy()
            op2 = output.copy()

            op2.append(nums[0])
            new_nums = nums[1:]

            solve(new_nums , op1)
            solve(new_nums , op2)

        output = []
        
        solve(nums,output)

        return result
        

        
        