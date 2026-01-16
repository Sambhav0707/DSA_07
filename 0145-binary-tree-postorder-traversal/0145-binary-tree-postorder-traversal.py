# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def postorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
#         # result = []

#         # if not root:
#         #     return []
        
#         # result += self.postorderTraversal(root.left)

#         # result += self.postorderTraversal(root.right)

#         # result.append(root.val)

#         # return result

#         #  iterative approach with 2 stack

#         # st = deque()

#         # visit = deque()

#         # result = []

#         # st.append(root)

#         # visit.append(False)

#         # while st:
#         #     cur , v = st.pop() , visit.pop()

#         #     if cur:
#         #         if v:
#         #             result.append(cur.val)
                
#         #         else:
#         #             st.append(cur)
#         #             visit.append(True)
#         #             st.append(cur.right)
#         #             visit.append(False)
#         #             st.append(cur.left)
#         #             visit.append(False)

#         # return result

#         # using one stack 

        result = []

        cur = root 

        st = deque()

        last = None

        while cur or st:

            if cur :

                st.append(cur)
                cur = cur.left

            else:
                temp = st[-1]

                if temp.right and last != temp.right :
                    cur = temp.right
                else:
                    result.append(temp.val)
                    last = st.pop()
            
        return result







        