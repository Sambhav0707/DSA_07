class Solution:
    def bestClosingTime(self, customers: str) -> int:
        n = len(customers)

        prefix_N = [0] * (n + 1)
        postfix_Y = [0] * (n + 1)

        for i in range(1 , n + 1):
            prefix_N[i] = prefix_N[i-1]

            if customers[i-1] == 'N':
                prefix_N[i] += 1
        

        for i in range(n-1 , -1 , -1):
            postfix_Y[i] = postfix_Y[i+1]

            if customers[i] == 'Y':
                postfix_Y[i] += 1
        

        min_penalty , idx = float('inf') , 0


        for i in range(n+1):
            p = prefix_N[i] + postfix_Y[i]

            if p < min_penalty:
                min_penalty = p
                idx = i

        return idx




                
        