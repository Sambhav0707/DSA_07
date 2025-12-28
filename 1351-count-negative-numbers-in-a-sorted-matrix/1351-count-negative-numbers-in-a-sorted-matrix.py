class Solution:
    def countNegatives(self, grid: List[List[int]]) -> int:
        row = len(grid)
        col = len(grid[0])
        count = 0
        # for i in range (row):
        #     for j in range(col):
        #         if grid[i][j] < 0:
        #             count += 1
        r = row - 1
        c = 0
        while r >= 0 and c < col:
            if grid[r][c] >= 0:
                c += 1
            else:
                count += (col - c)
                r -= 1
        
        return count


        