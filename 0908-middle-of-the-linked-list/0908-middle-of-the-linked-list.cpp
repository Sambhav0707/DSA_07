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
    ListNode* middleNode(ListNode* head) {

        //BRUTE FORCE
        //  ListNode* temp = head;
        //  int len = 0;
        //  while(temp->next != nullptr){
        //     len++;
        //     temp = temp->next;
        //  }
         
        //  temp = head;
        //  int count = 0;
        //  int mid = 0;
        //  if(len % 2 == 0){
        //    mid = len/2 ; 
        //  }else{
        //     mid = (len ) /2 + 1;
        //  }
         
        //  while(temp->next != nullptr){
        //     count++;
        //     temp = temp->next;
        //     if(count == mid){
        //         return temp;
        //         break;
        //     }

        //  }

        // return temp; 


        //OPTIMAL SOL by tortoise & hare algo

        ListNode* fast = head;
        ListNode* slow = head;


        while(fast != nullptr && fast->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;
        }


        return slow;

        
    }
};