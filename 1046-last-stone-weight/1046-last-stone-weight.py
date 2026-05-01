class Solution:
    def lastStoneWeight(self, stones: List[int]) -> int:
        heap = []
        for i in range(len(stones)):
            heapq.heappush(heap,-stones[i])

        while len(heap) > 1:
                s1 = -heapq.heappop(heap)
                s2 = -heapq.heappop(heap)

                if s1 != s2:
                    s3 = s1 - s2
                    heapq.heappush(heap,-s3)

        if len(heap) == 0:
            return 0
        return -heap[0]
                

        