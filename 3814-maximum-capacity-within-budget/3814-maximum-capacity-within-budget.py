class Solution:
    def maxCapacity(self, costs: List[int], capacity: List[int], budget: int) -> int:
        # pairing the costs and capacities
        cost_capacity = []

        for i in range(len(costs)):
            cost_capacity.append([costs[i] , capacity[i]])
        
        # sorting
        cost_capacity.sort()

        # creating a prefix sum array of max capacity untill that index
        prefix_max_capacity = [-1] * len(cost_capacity)

        prefix_max_capacity[0] = cost_capacity[0][1]

        for i in range(1 , len(cost_capacity)):
            prefix_max_capacity[i] = max(prefix_max_capacity[i - 1] , cost_capacity[i][1])
        
        # setting the max capacity
        max_capacity = 0

        # applying binary search logic

        for i in range(len(cost_capacity)):
            cap1 = cost_capacity[i][1] 
            cost1 = cost_capacity[i][0]

            if cost1 < budget:
                max_capacity = max(max_capacity , cap1)
            else:
                break
            
            l = 0
            h = i - 1
            rem_cost = budget - cost1
            index = -1

            while l <= h:
                mid = (l+h) // 2

                if cost_capacity[mid][0] < rem_cost:
                    index = mid
                    l = mid + 1
                else:
                    h = mid - 1
            
            if index != -1:
                max_capacity = max(max_capacity , (cap1 + prefix_max_capacity[index]))
            
        return max_capacity
            



        