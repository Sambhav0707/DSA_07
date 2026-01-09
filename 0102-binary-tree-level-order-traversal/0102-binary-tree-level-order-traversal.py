# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def levelOrder(self, root: Optional[TreeNode]) -> List[List[int]]:
        result = []
        dq = collections.deque()

        if not root:
            return []

        dq.append(root)

        while dq:
            level = []
            s = len(dq)

            for i in range(s):
                node = dq.popleft()

                if node.left : dq.append(node.left)

                if node.right : dq.append(node.right)

                level.append(node.val)
            
            result.append(level)
        
        return result



        