class Solution:
    def intersect(self, nums1: List[int], nums2: List[int]) -> List[int]:
        # mp = defaultdict(int)
        # for i in range(len(nums1)):
        #     mp[nums1[i]] += 1
        # ans = []
        # for i in range(len(nums2)):
        #     if mp[nums2[i]] > 0:
        #         ans.append(nums2[i])
        #         mp[nums2[i]] -= 1
        
        # return ans

        ans = []
        nums1.sort()
        nums2.sort()

        i = j = 0

        while i < len(nums1) and j < len(nums2):
            if nums1[i] < nums2[j]:
                i += 1
            elif nums1[i] > nums2[j]:
                j += 1
            else:
                ans.append(nums1[i])
                i+=1
                j+=1
        
        return ans
        