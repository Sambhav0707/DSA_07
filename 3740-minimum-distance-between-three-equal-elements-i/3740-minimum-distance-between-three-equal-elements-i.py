class Solution:
    def minimumDistance(self, nums: List[int]) -> int:
        n = len(nums)
        dist = float("inf")

        for i in range(n):
            for j in range(i+1 , n):
                for k in range(j+1 , n):
                    if nums[i] == nums[j] == nums[k]:
                        dist = min(dist , (abs(i - j) + abs(j - k) + abs(k - i)) )
        
        if dist == float("inf"):
            return -1
        return dist
        