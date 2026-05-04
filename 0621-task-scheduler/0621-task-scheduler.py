class Solution:
    def leastInterval(self, tasks: List[str], n: int) -> int:
        count = [0] * 26

        for task in tasks:
            count[ord(task) - ord("A")] += 1
        
        count.sort()
        maxF = count[25]
        idle = (maxF - 1)* n

        for i in range(24,-1,-1):
            idle -= min(maxF - 1 , count[i])
        
        if idle > 0:
            return len(tasks) + idle
        
        return len(tasks)