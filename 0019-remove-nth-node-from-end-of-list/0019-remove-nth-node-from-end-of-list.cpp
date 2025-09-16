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
        int count = 0;
        ListNode* temp = head;
        while(temp != nullptr){
            count++;
            temp = temp->next;
        }

        int res = count - n;

        //edge case :- if count == n; remove head

        if(count == n){
            head = head->next;
            return head;
        }

        temp = head;
        while(temp != nullptr){
            res--;
            if(res == 0){
                temp->next = temp->next->next;
                break;
            }
            temp = temp->next;
        }


        return head;

     
        
    }
};