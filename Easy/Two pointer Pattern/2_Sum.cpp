#include <vector>
#include <algorithm>
using namespace std;

/*Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

 

Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]
Example 3:

Input: nums = [3,3], target = 6
Output: [0,1]
 

Constraints:

2 <= nums.length <= 104
-109 <= nums[i] <= 109
-109 <= target <= 109
Only one valid answer exists.*/

/** this is my brute force solution which i figured it out by myself :- */

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> sum;
        for(int i=0 ; i < nums.size()  ; i++){
            for(int j= i+1 ; j < nums.size() ; ){
                if((nums[i] + nums[j]) == target){
                    sum = {i , j};
                    break;

                }else{
                    j++;
                }
            }
        }
        return sum; }

       
};

/** this the prpblem i faced :-  */

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
        
//         vector<int> sum;
//         for(int i=0 ; i < nums.size() - 2 ; i++){
//             for(int j= i+1 ; j < nums.size()-1 ; ){
//                 if((nums[i] + nums[j]) == target){
//                     sum = {i , j};
//                     break;

//                 }else{
//                     j++;
//                 }
//             }
//         }
//         return sum;
        
//     }
// };

// Problem:
// nums.size() - 2 and nums.size() - 1 exclude the last possible valid indices.

// In the input [3,2,4], the correct answer is [1,2], but your loop never checks j = 2 when i = 1.

// Example:
// For nums = [3,2,4], the only valid answer is:

// i = 1, j = 2 → nums[1] + nums[2] = 2 + 4 = 6

// But your outer loop goes only up to i = 0 (nums.size() - 2 = 1), so you never reach i = 1, and therefore never test (1,2).


