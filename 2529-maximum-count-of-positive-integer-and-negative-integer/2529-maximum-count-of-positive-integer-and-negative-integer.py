class Solution:
    def upper_bound(self , nums: List[int]) -> int:
        l = 0
        h = len(nums) - 1
        ans = -1

        while l <= h:
            mid = (l + h) // 2

            if nums[mid] > 0:
                ans = mid
                h = mid -1
            
            else:
                l = mid + 1
            
        return ans
    
    def lower_bound(self , nums: List[int]) -> int:
        l = 0
        h = len(nums) - 1
        ans = -1

        while l <= h:
            mid = (l + h) // 2

            if nums[mid] < 0:
                ans = mid
                l = mid + 1
            else:
                h = mid - 1
            
            
            
        return ans

    def maximumCount(self, nums: List[int]) -> int:
        # count_n = 0
        # count_p = 0

        # for i in range(len(nums)):
        #     if nums[i] == 0:
        #         continue  
        #     if nums[i] > 0:
        #         count_p += 1
        #     else:
        #         count_n += 1
        
        # return max(count_p , count_n)

        index_n = self.lower_bound(nums)
        index_p = self.upper_bound(nums) 

        count_n =  index_n + 1 if index_n != -1 else 0
        count_p = len(nums) - index_p if index_p != -1 else 0
        return max(count_p , count_n)



        
        