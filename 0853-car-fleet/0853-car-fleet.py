class Solution:
    def carFleet(self, target: int, position: List[int], speed: List[int]) -> int:
        n = len(position)
        times = [0] * n

        for i in range(n):
            times[i] = (target - position[i]) / speed[i]
        
        cars = []

        for i in range(n):
            cars.append([position[i] , times[i]])
        
        cars.sort(key=lambda x: x[0], reverse=True)

        fleet = 1

        lead = cars[0][1]

        for i in range(n):
           if cars[i][1] > lead:
            fleet += 1
            lead = cars[i][1]

        return fleet
            
        