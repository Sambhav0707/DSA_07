class Solution:
    def mergeAdjacent(self, nums: List[int]) -> List[int]:
        st = deque()

        r = 0
        while r < len(nums):
            cur = nums[r]
            while st and st[-1] == cur:
                cur += st.pop()
            st.append(cur)
            r += 1
        result = []
        for i in st:
            result.append(i)

        return result


        