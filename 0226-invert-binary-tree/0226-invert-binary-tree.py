# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def invertTree(self, root: Optional[TreeNode]) -> Optional[TreeNode]:
        # base condition
        if not root:
            return None
        # hypothesis 
        self.invertTree(root.left)
        self.invertTree(root.right)

        # induction 
        temp = root.left
        root.left = root.right
        root.right = temp

        return root

        