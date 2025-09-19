/**
 * Definition for singly-linked list.
 * class ListNode {
 *   int val;
 *   ListNode? next;
 *   ListNode([this.val = 0, this.next]);
 * }
 */
class Solution {
  ListNode? removeNthFromEnd(ListNode? head, int n) {
    if(head == null) return null;
    ListNode? temp = head;
    int count = 0;
    while(temp != null){
        count++;
        temp = temp.next;
    }

    int res = count - n;
    if (res == 0) {
      return head.next;
    }
    temp = head;
    for(int i  = 0 ; i < res -1 ; i++){
        if (temp != null) {
            temp = temp.next;
        }

    }
    if (temp != null && temp.next != null) temp.next = temp.next?.next;
    return head;


    
  }
}