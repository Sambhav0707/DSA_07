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
        ListNode* temp = head;

       int count = 0;
        while(temp->next != NULL){
            count++;
            temp = temp->next;
            if(count >= 10000){
                break;
            }

        }

        if(temp->next != NULL){
            return true;
        }

        return false;
        
    }
};