class Solution:
    def judgeCircle(self, moves: str) -> bool:
        robot = [0,0]

        for char in moves:
            if char == "U":
                robot[1] += 1
            elif char =="D":
                robot[1] -= 1
            elif char == "R":
                robot[0] += 1
            else:
                robot[0] -= 1
        
        if robot[0] == 0 and robot[1] == 0:
            return True
        
        return False


        