# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def rotateRight(self, head: Optional[ListNode], k: int) -> Optional[ListNode]:
        # BASE EDGE CASE
        if not head or not head.next or k == 0:
            return head

        # calculate the length of LL and the original tail
        n = 1
        original_tail = head
        while original_tail.next:
            n += 1
            original_tail = original_tail.next
        
        # calculate k % n and check if it is 0 then return head
        k = k%n
        if k == 0 : 
            return head
        
        # calculate remaining = n - k 
        remaining_lenght_of_LL = n - k

        # Connect the original tail to the Head
        original_tail.next = head

        # now find the new tail : that will be at the (n - remaining_lenght_of_LL) form the start
        new_tail = head
        for _ in range(1,remaining_lenght_of_LL):
            new_tail = new_tail.next
        
        # now new head will be at the next of new tail and new tail's next is None
        new_head = new_tail.next
        new_tail.next = None

        return new_head



        