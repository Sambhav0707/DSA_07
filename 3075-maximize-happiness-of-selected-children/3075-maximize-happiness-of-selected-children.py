class Solution:
    def maximumHappinessSum(self, happiness: List[int], k: int) -> int:
        # n = len(happiness)
        # total = 0
        # happiness.sort()
        # dcount = 0

        # for i in range(n - 1 , n - k - 1 , -1):
        #     if i == n - 1:
        #         total += happiness[i]
        #         dcount += 1
        #         continue
        #     if happiness[i] - dcount >= 0:
        #         total += happiness[i] - dcount
        #         dcount += 1
        #     else:
        #         break

        # return total

        happiness.sort(reverse = True)

        res = 0

        for i in range(k):
            gain = happiness[i] - i

            if gain <= 0:
                return res
            
            res += gain
        
        return res


            


        