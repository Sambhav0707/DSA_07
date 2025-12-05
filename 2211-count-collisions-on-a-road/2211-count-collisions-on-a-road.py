class Solution:
    def countCollisions(self, directions: str) -> int:
        count = 0

        i = 0
        j = len(directions) - 1
        n = len(directions)

        while i < n and directions[i] == 'L':
            i += 1
        
        while j >= 0 and directions[j] == 'R':
            j -= 1
        
        while i <= j:
            if directions[i] != 'S':
                count += 1
            i += 1
        
        return count
        

        