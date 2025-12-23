class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        # result = []
        # cset = set(List[int])
        # for i in range(len(nums)):
        #     for j in range(i + 1 , len(nums)):
        #         for k in range(j + 1 ,len(nums)):
        #             if nums[i] + nums[j] + nums[k] == 0:
        #                 num = [nums[i] , nums[j] , nums[k]]
        #                 num.sort()
        #                 if tuple(num) not in cset:
        #                     cset.add(tuple(num))
        #                     result.append(num)


        # return result

        #Better:-  

        # result = []
        # finalset = set()
        # for i in range(len(nums)):
        #     hashset = set()
        #     for j in range(i + 1 ,len(nums)):
        #         third = -(nums[i] + nums[j])

        #         if third in hashset:
        #             triplet = [nums[i] , nums[j] , third]
        #             triplet.sort()
        #             if tuple(triplet) not in finalset:
        #                 finalset.add(tuple(triplet))
        #                 result.append(triplet)
                        
        #         else:
        #             hashset.add(nums[j])


        # return result

        result =[]
        nums.sort()

        for index , value in enumerate(nums):
            if value > 0:
                break
            
            if index > 0 and value == nums[index - 1]:
                continue
            
            l , r = index + 1 , len(nums) - 1

            while l < r:
                third = value + nums[l] + nums[r]

                if third > 0:
                    r -= 1
                elif third < 0:
                    l += 1
                else:
                    result.append([value , nums[l] , nums[r]])

                    l+= 1
                    r -= 1

                    while nums[l] == nums[l - 1 ] and l < r:
                        l += 1
        
        return result



        