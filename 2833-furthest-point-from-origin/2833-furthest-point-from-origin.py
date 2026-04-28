class Solution:
    def furthestDistanceFromOrigin(self, moves: str) -> int:
        counts = defaultdict(int)

        for ch in moves:
            counts[ch] += 1
        
        if counts['R'] == counts['L']:
            return counts['_']
        elif counts['R'] > counts['L']:
            res = counts['R'] - counts['L']

            return res + counts['_']
        else:
            res = counts['L'] - counts['R']

            return res + counts['_']


        