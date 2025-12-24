class Solution:
    def minimumBoxes(self, apple: List[int], capacity: List[int]) -> int:
        result = sum(apple)

        capacity.sort()
        last = len(capacity) - 1
        count = 0

        while result > 0:
            if result > capacity[last]:
                result = result - capacity[last]
                last -= 1
                count += 1
            else:
                count += 1
                return count
        
        return count




        