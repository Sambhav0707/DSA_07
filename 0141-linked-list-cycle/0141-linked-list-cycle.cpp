/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        
        if(head == NULL){
            return false;
        }

    //BRUTE FORCE    
    //     ListNode* temp = head;

    //    int count = 0;
    //     while(temp->next != NULL){
    //         count++;
    //         temp = temp->next;
    //         if(count >= 10000){
    //             break;
    //         }

    //     }

    //     if(temp->next != NULL){
    //         return true;
    //     }

    //     return false;


    //OPTIMAL SOLUTION
     ListNode* fast = head;
      ListNode* slow = head;


      while(fast!=NULL && fast->next != NULL){

        slow = slow->next;
        fast = fast->next->next;


        if(slow==fast){
            return true;
        }
      
      }
    return false;

        
    }
};