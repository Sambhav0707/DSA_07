class Solution:
    def minJumps(self, arr: List[int]) -> int:
        n = len(arr)

        # Base case
        if n == 1:
            return 0
        # populate the map key : arr[i] and value : i
        mp = defaultdict(list)
        for index  , value in enumerate(arr):
            mp[value].append(index)
        # initialize a visited array and queue and pust the 0th index in ques and mark the visisted[0] = True
        visited = [False] * n
        queue = deque()
        queue.append(0)
        visited[0] = True
        # Steps to count the steps taken 
        steps = 0
        # now it is the main loop 
        while queue:
            # size of the queue
            size = len(queue)
            # check this level (BFS)
            for _ in range(size):
                current = queue.popleft()
                # check if it is n - 1
                if current == n - 1:
                    return steps
                # extract the left and right moves 
                left = current - 1
                right = current + 1
                # insertion in queue for left and update the visited
                if left >= 0 and not visited[left]:
                    queue.append(left)
                    visited[left] = True
                # insertion in queue for right and update the visited
                if right < n and not visited[right]:
                    queue.append(right)
                    visited[right] = True
                # now check if we can jump to the same number or not and append those index in queue
                for idx in mp[arr[current]]:
                    if not visited[idx]:
                        queue.append(idx)
                        visited[idx] = True
                
                del mp[arr[current]]
            
            steps += 1
        
        return steps





        