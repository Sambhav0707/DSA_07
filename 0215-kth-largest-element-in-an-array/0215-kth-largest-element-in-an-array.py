class Solution:
    def findKthLargest(self, nums: List[int], k: int) -> int:
        n = len(nums)
        ans = []
        for i in range(n):
            heapq.heappush(ans,nums[i])

            if len(ans) > k:
                heapq.heappop(ans)
        
        return ans[0]
        