/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        //BRUTE FORCE
        // int count = 0;
        // ListNode* temp = head;
        // while(temp != nullptr){
        //     count++;
        //     temp = temp->next;
        // }

        // int res = count - n;

        // //edge case :- if count == n; remove head

        // if(count == n){
        //     head = head->next;
        //     return head;
        // }

        // temp = head;
        // while(temp != nullptr){
        //     res--;
        //     if(res == 0){
        //         temp->next = temp->next->next;
        //         break;
        //     }
        //     temp = temp->next;
        // }


        // return head;


        //OPTIMAL using fast and slow pointers

        ListNode* fast = head;
        ListNode* slow = head;
        int count = 0;

       for(int  i  = 0 ; i < n ; i++){
            fast = fast->next;
       }
       
  if (fast == nullptr)
        return head->next;

       while (fast->next != nullptr){
           
             fast = fast->next;
             slow = slow->next;
        }

        slow->next = slow->next->next;

        return head;


     
        
    }
};