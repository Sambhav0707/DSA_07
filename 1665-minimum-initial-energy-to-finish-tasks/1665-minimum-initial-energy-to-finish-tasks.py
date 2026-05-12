class Solution:
    def minimumEffort(self, tasks: List[List[int]]) -> int:
        """
        Sorting the task based on the diff -> minimum - actual

        Why ? 

        lets say Task A - [3 , 15] and Task B - [8,10]
        SO if we process Task B -> starting minimum Energy -> 10 and after process -> energy left = 2 (10 - 8)
        now we go to the Task A -> we need deficit of 13 (15 - 2) more energy to process 
        So in the end the minimum energy required will be: 
         initial start minimum engergy + deficit = 10 + 13 = 23
        
        Now we do the Task A first which is having the diff (minimum - actual) greater
        so the starting minimum energy is 15 and after processing the energy remains to 12 (15 - 3)
        now to process Task B we dont need extra energy as we already have 13 left with us 

        so the minimum starting energy = 15
        """
        tasks.sort(key=lambda x: x[1] - x[0] , reverse=True)

        # getting the starting min balance and total deficit / total extra engery  
        total_extra_energy = 0
        present_energy = tasks[0][1] 

        for task in tasks:
            if present_energy < task[1]: # less then the minimum energy required
                # updating the total extra energy needed
                total_extra_energy += task[1] - present_energy
                # present energy becomes the req min energy to begin the task
                present_energy = task[1] 

            # after the process setting up the energy after the process
            present_energy -= task[0]
        
        return total_extra_energy + tasks[0][1]
       


        