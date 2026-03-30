class Solution:
    def maxSlidingWindow(self, nums: List[int], k: int) -> List[int]:
        output = []
        dq = collections.deque()
        l = r = 0

        while r < len(nums):
            while dq and dq[-1] < nums[r]:
                dq.pop()
            
            dq.append(nums[r])
            
            if r >= k - 1:
                output.append(dq[0])
                if nums[l] == dq[0]:
                    dq.popleft()
                
                l += 1
            
            r += 1
                 
        
        return output
        