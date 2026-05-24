class Solution:
    def limitOccurrences(self, nums: list[int], k: int) -> list[int]:
        freq = Counter(nums)
        result = []
        for key , val in freq.items():
            count = 1
            if val > k:
                while count <= k:
                    result.append(key)
                    count += 1
            else:
                while count <= val:
                    result.append(key)
                    count += 1
        
        return result




        