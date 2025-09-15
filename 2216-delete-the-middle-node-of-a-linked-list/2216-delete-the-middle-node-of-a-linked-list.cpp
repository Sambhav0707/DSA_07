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
   ListNode* middleOdd(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = nullptr;
       if (head == nullptr || head->next == nullptr) {
        //   delete head;
          return nullptr;
           }

        while( fast != nullptr && fast->next != nullptr ){
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

       

        prev->next = slow->next;
        // delete(slow);
        return head;

    }
       ListNode* middleEven(ListNode* head , int count) {
        ListNode* slow = head;
        ListNode* fast = head;
      


        while(fast != nullptr && fast->next != nullptr){
          
            slow = slow->next;
            fast = fast->next->next;
        }

        // if(count == 2){
        //     slow->next = nullptr;
        //     delete(slow->next);
        //     return head;
        // }

        ListNode* temp = slow->next;
        slow->next = slow->next->next;
        delete(temp);
        return head;

    }

     ListNode* deleteMiddle(ListNode* head) {
        //  ListNode* temp = head;
        // int count = 0;

        // while(temp != nullptr){
        //     count++;
        //     temp = temp->next;
        // }


        // if(count % 2 == 1){
        //     return middleEven(head , count);
        // }

        return middleOdd(head);
        
    }
};