class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        # most obvious sol that came in my mind :) if interviewer has promised not to judge me!!
        mp = {}

        for num in nums:
            mp[num] = mp.get(num , 0) + 1
        
        sorted_mp = dict(sorted(mp.items() , key=lambda x: x[1] ,reverse=True))

        ans = []
        for K , v in sorted_mp.items():
            if len(ans) < k:
                ans.append(K)
        
        return ans

        
