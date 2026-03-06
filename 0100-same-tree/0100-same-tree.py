# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isSameTree(self, p: Optional[TreeNode], q: Optional[TreeNode]) -> bool:
        # base condition 
        if not  p and not q :
            return True
        elif not p and q or not q and p:
            return False

        
        # hypothesis
        subL = self.isSameTree(p.left , q.left)
        subR = self.isSameTree(p.right , q.right)

        # induction
        if p.val == q.val and subL and subR:
            return True
        else:
            return False

        
        