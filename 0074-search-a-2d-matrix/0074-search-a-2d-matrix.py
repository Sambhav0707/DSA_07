class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        row = len(matrix)
        col = len(matrix[0])

        target_row = -1 
        top , bottom = 0 , row - 1

        while top <= bottom:
            mid = (top + bottom) // 2

            if target > matrix[mid][col - 1] :
                top = mid + 1
            elif target < matrix[mid][0]:
                bottom = mid - 1
            else:
                target_row = mid
                break
        

        if target_row == -1:
            return False
        
        l = 0
        h = col - 1

        while l <= h:
            mid = (l + h) // 2

            if matrix[target_row][mid] == target:
                return True
            
            if matrix[target_row][mid] < target:
                l = mid + 1
            else:
                h = mid - 1

        return False 
        