/*
Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must be unique and you may return the result in any order.

 

Example 1:

Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2]
Example 2:

Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
Output: [9,4]
Explanation: [4,9] is also accepted.
 

Constraints:

1 <= nums1.length, nums2.length <= 1000
0 <= nums1[i], nums2[i] <= 1000

*/

/** i was able to do it in the optimal sol approach with TC : O(n + m) with two pointer approach **/
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
          vector<int> ans;
       unordered_set<int> answer;
        for(int i = 0 ; i < nums1.size() ;i++){
           
            answer.insert(nums1[i]);
        }
        for(int i = 0 ; i < nums2.size() ;){
          unordered_set<int>::iterator iter =  answer.find(nums2[i]);
            if(iter != answer.end()){
                ans.push_back(*iter);
                answer.erase(nums2[i]);
                i++;
            }else{
                i++;
            }
            

        }
        return ans;
    }
};