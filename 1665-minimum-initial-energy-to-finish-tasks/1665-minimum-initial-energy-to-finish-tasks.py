class Solution:
    def minimumEffort(self, tasks: List[List[int]]) -> int:
        # sorting the tasks based on the difference of min - actual 
        # so that we can process the task having larger difference first and then the smaller difference
        tasks.sort(key=lambda x: x[1] - x[0])

        # getting the starting min balance and total loan 
        IMB = tasks[-1][1]
        SMB = tasks[-1][1]
        TL = 0
        for i in range(len(tasks) - 1, -1, -1):
            if SMB < tasks[i][1]:
                # take loan 
                TL += tasks[i][1] - SMB
                # PROCESS THE TASK WITH New SMB
                SMB += tasks[i][1] - SMB
                SMB = SMB - tasks[i][0]
            else:
                SMB = SMB - tasks[i][0]
        
        return IMB + TL



        