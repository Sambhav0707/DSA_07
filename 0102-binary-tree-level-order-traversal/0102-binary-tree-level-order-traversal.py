# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def levelOrder(self, root: Optional[TreeNode]) -> List[List[int]]:
        q = deque()
        ans = list()
        if root == None:
            return []
        
        q.append(root)

        while len(q) != 0:
            size = len(q)
            level = []

            for i in range(size):
                node = q.popleft()
                if node.left != None: q.append(node.left)
                if node.right != None: q.append(node.right)
                level.append(node.val)
            
            ans.append(level)


        return ans

        