class Solution:
    def trap(self, height: List[int]) -> int:
        n = len(height)

        leftMax = [0] * n
        rightMax = [0] * n

        leftMax[0] = height[0]
        # setting the leftMax 
        for i in range(1, n):
            leftMax[i] = max(leftMax[i - 1] , height[i])

        rightMax[n-1] = height[n-1]

        for i in range(n-2, -1 , -1):
            rightMax[i] = max(rightMax[i + 1] , height[i])
        
        res = 0

        for i in range(n):
            res += min(rightMax[i] , leftMax[i]) - height[i]
        
        return res

            


        