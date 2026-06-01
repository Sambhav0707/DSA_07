class Solution:
    def minimumCost(self, cost: List[int]) -> int:
        n = len(cost)
        cost.sort()
        count = 0 
        min_cost = 0
        for i in range(n - 1 , -1 , -1):
            if count == 2:
                count = 0
                continue
            min_cost += cost[i]
            count += 1
        return min_cost
        
            
        