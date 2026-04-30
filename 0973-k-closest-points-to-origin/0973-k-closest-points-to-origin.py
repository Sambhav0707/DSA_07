class Solution:
    def kClosest(self, points: List[List[int]], k: int) -> List[List[int]]:
        n = len(points)
        ans = []

        for i in range(n):
            cordinate1 = (points[i][0] - 0) *  (points[i][0] - 0)
            cordinate2 = (points[i][1] - 0) *  (points[i][1] - 0)

            dist = math.sqrt(cordinate1 + cordinate2)

            heapq.heappush(ans , (-dist , points[i]))

            if len(ans) > k:
                heapq.heappop(ans)
        
        res = []

        for num in ans:
            res.append(num[1])
        
        return res
        
                