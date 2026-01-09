# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def preorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        st = deque()
        result = []

        if not root:
            return []
        
        st.append(root)

        while st :
            node = st.pop()

            result.append(node.val)

            if node.right : st.append(node.right)

            if node.left : st.append(node.left)
        
        return result
