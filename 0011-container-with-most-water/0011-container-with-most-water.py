class Solution:
    def maxArea(self, height: List[int]) -> int:
        # Brute force 
        
        # max_area = 0

        # for i in range(len(height)):
        #     area = 0
        #     for j in range(i + 1 , len(height)):
        #         l = min(height[i] , height[j])
        #         b = j - i
        #         area = l * b
        #         max_area = max(max_area , area)
        

        # return max_area

        max_area = 0

        l = 0
        h = len(height) - 1

        while l < h:
            area = (h - l) * min(height[l] , height[h])
            max_area = max(max_area , area)

            if height[l] < height[h]:
                l += 1
            elif height[l] > height[h]:
                h -= 1
            else:
                l += 1
                h -= 1
        
        return max_area

                                        




        