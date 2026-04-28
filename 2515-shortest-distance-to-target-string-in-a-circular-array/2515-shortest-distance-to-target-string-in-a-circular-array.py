class Solution:
    def closestTarget(self, words: List[str], target: str, startIndex: int) -> int:
        n = len(words)
        dist = float("inf")
        for i , word in enumerate(words):
            if word == target:
                dist = min(min(abs(i - startIndex) , n - abs(i - startIndex)), dist)

        if dist == float("inf"):
            return -1
        return dist
        