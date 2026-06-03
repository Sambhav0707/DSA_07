class Solution:
    def earliestFinishTime(self, ls: List[int], ld: List[int], ws: List[int], wd: List[int]) -> int:
        minL = float("inf")
        minW = float("inf")
        ans = float("inf")

        # land -> water
        for i in range(len(ls)):
            minL = min(minL , ls[i] + ld[i])

        for i in range(len(ws)):
            cur = max(minL , ws[i]) + wd[i]
            ans =  min(ans , cur)

        # water -> land
        for i in range(len(ws)):
            minW = min(minW , ws[i] + wd[i])

        for i in range(len(ls)):
            cur = max(minW , ls[i]) + ld[i]
            ans =  min(ans , cur)
        
        return ans
        
