class Solution:
    def largestRectangleArea(self, heights: List[int]) -> int:
        max_area = 0
        st = []

        for i , h in enumerate(heights):
            start = i

            while st and st[-1][1] > h:
                index , height = st.pop()
                max_area = max(max_area , height * (i - index))
                start = index
            
            st.append((start , h))
        
        for i , h in st:
            max_area = max(max_area , h * (len(heights) - i))
        
        return max_area

        