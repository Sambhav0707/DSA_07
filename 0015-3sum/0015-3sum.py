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

        result = []
        finalset = set()
        for i in range(len(nums)):
            hashset = set()
            for j in range(i + 1 ,len(nums)):
                third = -(nums[i] + nums[j])

                if third in hashset:
                    triplet = [nums[i] , nums[j] , third]
                    triplet.sort()
                    if tuple(triplet) not in finalset:
                        finalset.add(tuple(triplet))
                        result.append(triplet)
                        
                else:
                    hashset.add(nums[j])


        return result

        