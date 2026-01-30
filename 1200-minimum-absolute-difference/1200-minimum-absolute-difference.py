class Solution:
    def minimumAbsDifference(self, arr: List[int]) -> List[List[int]]:
        arr.sort()
        min_abs = float("inf")
        l = 0
        for r in range(1,len(arr)):
            diff = abs(arr[l] - arr[r])
            min_abs = min(min_abs , diff)
            l = r
        
        l = 0
        ans=[]
        for r in range(1,len(arr)):
            diff = abs(arr[l] - arr[r])
            if diff == min_abs:
                ans.append([arr[l] , arr[r]])
            l = r
        
        return ans

        
            


        