#include <vector>
#include <algorithm>
using namespace std;

// Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

// Note that you must do this in-place without making a copy of the array.

 

// Example 1:

// Input: nums = [0,1,0,3,12]
// Output: [1,3,12,0,0]
// Example 2:

// Input: nums = [0]
// Output: [0]
 

// Constraints:

// 1 <= nums.length <= 104
// -231 <= nums[i] <= 231 - 1



class Solution {
public:
int left = 0;
    void moveZeroes(vector<int>& nums) {
        for(int right = 0 ; right < nums.size() ; right++){
            if(nums[right] != 0){
                swap(nums[left] , nums[right]);
                left++;
            }
        }
        
    }
};


// problem i faced 
///i tried initialy with dart

// class Solution {
//   void moveZeroes(List<int> nums) {
//    for (int i = 0 ; i <= nums.length ; i ++){
//     if(nums.elementAt(i) == 0){
//         nums[i] = nums[i+1];


//     }


//    }
    
//   }
// }

// Your code has:

// An off-by-one error in the loop condition.

// Unsafe indexing with i+1.

// Incorrect shifting logic — it doesn't achieve the required "move zeroes to the end" while maintaining order.
