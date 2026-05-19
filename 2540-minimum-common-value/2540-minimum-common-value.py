class Solution:
    def getCommon(self, nums1: List[int], nums2: List[int]) -> int:
        n = len(nums1)
        m = len(nums2)

        mp = defaultdict(int)

        for num in nums1:
            mp[num] += 1
        
        for num in nums2:
            if num in mp:
                return num
        
        return - 1
        