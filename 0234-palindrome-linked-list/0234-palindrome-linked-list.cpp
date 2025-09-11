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
    bool isPalindrome(ListNode* head) {
        ListNode* temp = head;
        vector<int>ans;
        while(temp != nullptr){
            ans.push_back(temp->val);
            temp = temp->next;
        }

        int l = 0;
        int r =ans.size()-1;
        while(l<=r){
            if(ans[l] == ans[r]){
                l++;
                r--;
            }else{
                return false;
            }
        }

        return true;
        
    }
};