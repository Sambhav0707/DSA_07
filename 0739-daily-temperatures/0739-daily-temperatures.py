class Solution:
    def dailyTemperatures(self, temp: List[int]) -> List[int]:
        n = len(temp)
        st = collections.deque()
        ans = [0] * n

        for i in range(n - 1 , -1 , -1):
            while st and st[-1][0] <= temp[i]:
                st.pop()
            if not st:
                ans[i] = 0
                st.append([temp[i], i])
            else:
                ans[i] = st[-1][1] - i
                st.append([temp[i], i])

        
        return ans


       
            

            

        