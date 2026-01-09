class Solution:
    def maxSlidingWindow(self, nums: List[int], k: int) -> List[int]:
        # if k == len(nums):
        #     return [max(nums)]
        
        # current_window = {}

        # for i in range(k):
        #     current_window[nums[i]] = 1 + current_window.get(nums[i] , 0)

        # result = []

        # result.append(max(current_window))
        # l = 0
        # for i in range(k , len(nums)):
        #     current_window[nums[i]] = 1 + current_window.get(nums[i] , 0)

        #     current_window[nums[l]] -= 1

        #     if current_window[nums[l]] == 0:
        #         current_window.pop(nums[l])

        #     l += 1

        #     result.append(max(current_window))
        
        # return result


        result = []

        dq = collections.deque()

        l = r = 0

        while r < len(nums):

            while dq and nums[dq[-1]] < nums[r]:
                dq.pop()

            dq.append(r)

            if dq[0] < r - k + 1:
                dq.popleft()
            
            if (r + 1) >= k:
                result.append(nums[dq[0]])
                l += 1
            
            r += 1

        return result
            


                
             