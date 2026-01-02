class Solution:
    def trap(self, height: List[int]) -> int:
        n = len(height)

        leftMax = [0] * n
        rightMax = [0] * n

        left = 0
        # setting the leftMax 
        for i in range(n):
            leftMax[i] = left
            left = max(left , height[i])

        right = 0

        for i in range(n-1, -1 , -1):
            rightMax[i] = right
            right = max(right , height[i])
        
        res = 0

        for i in range(n):
            res += max(0, min(leftMax[i], rightMax[i]) - height[i])        
        return res


            


        