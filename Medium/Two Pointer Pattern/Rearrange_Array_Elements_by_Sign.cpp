/*You are given a 0-indexed integer array nums of even length consisting of an equal number of positive and negative integers.

You should return the array of nums such that the the array follows the given conditions:

Every consecutive pair of integers have opposite signs.
For all integers with the same sign, the order in which they were present in nums is preserved.
The rearranged array begins with a positive integer.
Return the modified array after rearranging the elements to satisfy the aforementioned conditions.

 

Example 1:

Input: nums = [3,1,-2,-5,2,-4]
Output: [3,-2,1,-5,2,-4]
Explanation:
The positive integers in nums are [3,1,2]. The negative integers are [-2,-5,-4].
The only possible way to rearrange them such that they satisfy all conditions is [3,-2,1,-5,2,-4].
Other ways such as [1,-2,2,-5,3,-4], [3,1,2,-2,-5,-4], [-2,3,-5,1,-4,2] are incorrect because they do not satisfy one or more conditions.  
Example 2:

Input: nums = [-1,1]
Output: [1,-1]
Explanation:
1 is the only positive integer and -1 the only negative integer in nums.
So nums is rearranged to [1,-1].
 

Constraints:

2 <= nums.length <= 2 * 105
nums.length is even
1 <= |nums[i]| <= 105
nums consists of equal number of positive and negative integers.
 

It is not required to do the modifications in-place.*/


/** i solved it with brute force approch which resulted in TC : O(n) for Unordered_Map and O(n log n) for Map  and SC : O(n) */

///brute force approach with unordered_map
// class Solution {
// public:
//     vector<int> rearrangeArray(vector<int>& nums) {
       
//        unordered_map<int , int> pmpp;
//          unordered_map<int , int> nmpp;
//       int  nindex = 0 , pindex =0 ;
//         for(int i =0 ; i < nums.size() ; i++
//         ){
//             if(nums[i] < 0){
//                 nmpp.insert({nindex , nums[i]});
//                 nindex++;
                
//             }else{
//                 pmpp.insert({pindex , nums[i]});
//                 pindex++;

//             }
//         }
//         int  ppindex = 0 , nnindex =0 ;
//         for(int i = 0 ; i < nums.size() ; ){
//             nums[i] = pmpp[ppindex];
//             ppindex++;
//             i++;
//             nums[i] = nmpp[nnindex];
//             nnindex++;
//             i++;




//         }
//         return nums;


        
//     }
// };

/// brute force approach with map
// class Solution {
// public:
//     vector<int> rearrangeArray(vector<int>& nums) {
       
//       map<int , int> pmpp;
//         map<int , int> nmpp;
//       int  nindex = 0 , pindex =0 ;
//         for(int i =0 ; i < nums.size() ; i++
//         ){
//             if(nums[i] < 0){
//                 nmpp.insert({nindex , nums[i]});
//                 nindex++;
                
//             }else{
//                 pmpp.insert({pindex , nums[i]});
//                 pindex++;

//             }
//         }
//         int  ppindex = 0 , nnindex =0 ;
//         for(int i = 0 ; i < nums.size() ; ){
//             nums[i] = pmpp[ppindex];
//             ppindex++;
//             i++;
//             nums[i] = nmpp[nnindex];
//             nnindex++;
//             i++;




//         }
//         return nums;


        
//     }
// };


/** the actual bruteforce approach with two arrays  TC : O(2n) SC : O(n) */

// class Solution {
// public:
//     vector<int> rearrangeArray(vector<int>& nums) {
//         vector<int> arr1;
//         vector<int> arr2;

//         for (int i = 0 ; i < nums.size() ; i++){
//             if(nums[i] < 0){
//                arr1.push_back(nums[i]);  // For negative numbers

//             }else{
//               arr2.push_back(nums[i]); } // For positive numbers

//         }
//         for(int i = 0 ; i < nums.size() /2 ; i++ ){
//             nums[2*i] = arr2[i];
//             nums[2*i+1] = arr1[i];
//         }

//         return nums;
//     }
// };

 
/** the problem was i was not properply adding the elements to the arr1 and arr2  */
// class Solution {
// public:
//     vector<int> rearrangeArray(vector<int>& nums) {
//         vector<int> arr1;
//         vector<int> arr2;

//         for (int i = 0 ; i < nums.size() ; i++){
//             if(nums[i] < 0){
//                 arr1[nums[i]];
//             }else{
//                 arr2[nums[i]];
//             }
//         }
//         for(int i = 0 ; i < nums.size() /2 ; i++ ){
//             nums[2*i] = arr2[i];
//             nums[2*i+1] = arr1[i];
//         }

//         return nums;
//     }
// };

/** the optimal solution is with two pointer approach  TC : O(n) SC : O(n)  */
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
      vector<int> ans (n , 0);
      int pos = 0 , neg = 1;
      for(int i = 0 ; i < n ; i++){
        if(nums[i] < 0){
            ans[neg] = nums[i];
            neg += 2;

        }else{
            ans[pos] = nums[i];
            pos += 2;
        }

      }
      return ans;
    }
};
