class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        # if len(nums) == 0:
        #     return 0
        # if len(nums) == 1:
        #     return 1
            
        # nums.sort()
        # count = 1
        # max_len = float('-inf')
        # for i in range(1 , len(nums)):
        #     if nums[i-1] == nums[i]:
        #         continue
        #     if nums[i-1] == nums[i] - 1:
        #         count += 1
        #     else:
        #         count = 1
        #     max_len = max(max_len , count)
            
        # if max_len == float('-inf'):
        #     return 1
        # return max_len

        num_set = set(nums)
        longest = 0

        # 2. Iterate over the UNIQUE numbers
        for n in num_set:
            # 3. Only start counting if 'n' is the absolute start of a sequence
            if (n - 1) not in num_set:
                current_num = n
                current_streak = 1

                # 4. Count how long this specific sequence is
                while (current_num + 1) in num_set:
                    current_num += 1
                    current_streak += 1

                # 5. Keep track of the best streak found so far
                longest = max(longest, current_streak)
        return longest


        