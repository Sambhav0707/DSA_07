class Solution:
    def longestCommonPrefix(self, arr1: List[int], arr2: List[int]) -> int:
        # finding the all prefixes in arr1 and storing them in set
        prefixes = set()

        for num in arr1:
            while num not in prefixes and num > 0:
                prefixes.add(num)

                num //= 10

        result = 0

        for num in arr2:
            while num not in prefixes and num > 0:
                num //= 10
            
            if num > 0:
                result = max(result , math.log10(num) + 1)
        

        return int(result)

