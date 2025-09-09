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
    ListNode *detectCycle(ListNode *head) {
    //BRUTE FORCE    
    //    ListNode* temp = head;
    //    ListNode* prev = prev;
    //   unordered_map<ListNode* , int>mp;
    //   if(head == NULL){
    //     return NULL;
    //   }
    //     while(temp->next != NULL){

    //      if(mp.find(temp) != mp.end()){
    //         return temp;
    //      }

    //      mp[temp]++;
    //      temp = temp->next;
           
    //     }


    //     return NULL;

    //OPTIMAL

    ListNode* slow = head;
    ListNode* fast = head;

    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;


        if(fast == slow){
            slow =head;
            while(slow != fast){
                slow = slow->next;
                fast = fast->next;
            }

            return fast;
        }
    }

    return NULL;

        
    }
};