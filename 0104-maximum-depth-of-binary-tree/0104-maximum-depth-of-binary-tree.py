# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def maxDepth(self, root: Optional[TreeNode]) -> int:
        # Base condition step
        if not root:
            return 0

        # hypothesis step
        lh = self.maxDepth(root.left)
        rh = self.maxDepth(root.right)

        # induction step
        return 1 + max(lh , rh)
        
        