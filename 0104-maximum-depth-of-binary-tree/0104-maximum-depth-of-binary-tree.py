# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def maxDepth(self, root: Optional[TreeNode]) -> int:
        if not root:
            return 0
            
        level_order = []

        dq = collections.deque()

        dq.append(root)

        while dq:
            level = []

            dq_len = len(dq)
            
            for i in range(dq_len):

                top = dq.popleft()

                if top.left : dq.append(top.left)

                if top.right : dq.append(top.right)

                level.append(top.val)
            
            level_order.append(level)
        
        return len(level_order)
        