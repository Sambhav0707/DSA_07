class Solution(object):
    def getSneakyNumbers(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        st = set()
        result = []
        for i in nums:
            if i in st:
                result.append(i)
            else:
                st.add(i)

        return result