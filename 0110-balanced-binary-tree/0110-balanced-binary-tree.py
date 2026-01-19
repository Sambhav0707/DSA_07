# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isheight(self , root: Optional[TreeNode]) -> int:
        if not root:
            return 0
        
        left_height = self.isheight(root.left)

        if left_height == -1 : return -1

        right_height = self.isheight(root.right)

        if right_height == -1 : return -1

        if  abs(left_height - right_height) > 1 :
            return -1
        
        return max(left_height , right_height) + 1

        

    def isBalanced(self, root: Optional[TreeNode]) -> bool:

        return self.isheight(root) != -1
        