/*
Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

 

Example 1:

Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]
Example 2:

Input: nums = [-1,-100,3,99], k = 2
Output: [3,99,-1,-100]
Explanation: 
rotate 1 steps to the right: [99,-1,-100,3]
rotate 2 steps to the right: [3,99,-1,-100]
 

Constraints:

1 <= nums.length <= 105
-231 <= nums[i] <= 231 - 1
0 <= k <= 105
 

Follow up:

Try to come up with as many solutions as you can. There are at least three different ways to solve this problem.
Could you do it in-place with O(1) extra space?
*/

/** My approach was brute force with the TC:- O(k² + k × n) and SC:- O(k) */

// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//         k = k % nums.size();

//         int count = 0;
//         int n = nums.size();
//         int count2 = 0;
//         vector<int> ans;
//         for(int i = n -1  ; i>= 0 ; ){
//             if(count == k){
//                 break;
//             }else{
//                ans.insert(ans.begin() + count , nums[i]);
//                 nums.pop_back();
//                 count++;
//                 i--;
//             }


//         }
//         for(int i = ans.size() - 1 ; i>= 0;){
//             nums.insert(nums.begin() + count2 , ans[i]);
//             i--;
//             count2++;
//         }


//     }
// };

///the problems i faced :- 
// Problem	                                 Why it breaks
// i <= 0 loop condition	                 Loop never runs — nums unchanged
// nums.pop_back()	                         You're deleting elements permanently
// Order insertion logic	                 Already fixed with second loop (after fixing condition)

//  Without k = k % n, your code tries to rotate 3 elements in an array of size 2, leading to out-of-bounds logic or no change, depending on how the loop breaks.

//problem code:- 

// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//         int count = 0;
//         int n = nums.size();
//         int count2 = 0;
//         vector<int> ans;
//         for(int i = n -1  ; i>= 0 ; ){
//             if(count == k){
//                 break;
//             }else{
//                ans.insert(ans.begin() + count , nums[i]);
//                 nums.pop_back();
//                 count++;
//                 i--;
//             }


//         }
//         for(int i = ans.size() - 1 ; i<= 0;){
//             nums.insert(nums.begin() + count2 , ans[i]);
//             i--;
//             count2++;
//         }


//     }
// }

/** then i solved it thorugh reversing the aray appraoch and then reversing the array from the start to k and then from k+1 to end. with TC = O(n) and SC = O(1) */

#include <xutility>
#include <vector>
using namespace std;
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();
        reverse(nums.begin() , nums.end());
        reverse(nums.begin(), nums.begin()+k);
        reverse(nums.begin()+k , nums.end());

      
    }
};





