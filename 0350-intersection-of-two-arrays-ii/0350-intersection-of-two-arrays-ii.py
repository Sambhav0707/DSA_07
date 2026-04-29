class Solution:
    def intersect(self, nums1: List[int], nums2: List[int]) -> List[int]:
        mp = defaultdict(int)
        for i in range(len(nums1)):
            mp[nums1[i]] += 1
        ans = []
        for i in range(len(nums2)):
            if mp[nums2[i]] > 0:
                ans.append(nums2[i])
                mp[nums2[i]] -= 1
        
        return ans
        