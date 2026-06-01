class Solution:
    def digitFrequencyScore(self, n: int) -> int:
        freq = Counter(str(n))
        score = 0
        for key , val in freq.items():
            score += int(key) * val
        return score

        