# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isSame(self,root, subRoot):
        # BASE CONDITION
        if not root and not subRoot:
            return True
        elif not root and subRoot or root and not subRoot:
            return False

        # HYPOTHESIS
        isLeft = self.isSame(root.left, subRoot.left)
        isRight = self.isSame(root.right, subRoot.right)

        # INDUCTION
        if isLeft and isRight:
            if root.val == subRoot.val:
                return True
            else:
                return False

        else:
            return False

    def isSubtree(self, root: Optional[TreeNode], subRoot: Optional[TreeNode]) -> bool:
        # BASE CONDITION
        if not root :
            return False
        
        if self.isSame(root , subRoot):
            return True
        
        else:
            return (self.isSubtree(root.left , subRoot) or self.isSubtree(root.right , subRoot))