# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def modifiedList(self, nums: List[int], head: Optional[ListNode]) -> Optional[ListNode]:
        st = set(nums)

        ans = []
        temp = head

        while temp is not None:
            if temp.val not in st:
                ans.append(temp.val)
            
            temp = temp.next
        
        dummyHead = ListNode(0)
        tail = dummyHead

        for i in ans:
            new = ListNode(i)

            tail.next = new

            tail = tail.next
        
        return dummyHead.next
        