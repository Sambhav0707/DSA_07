/*
Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity.

 

Example 1:

Input: nums = [1,3,5,6], target = 5
Output: 2
Example 2:

Input: nums = [1,3,5,6], target = 2
Output: 1
Example 3:

Input: nums = [1,3,5,6], target = 7
Output: 4
 

Constraints:

1 <= nums.length <= 104
-104 <= nums[i] <= 104
nums contains distinct values sorted in ascending order.
-104 <= target <= 104

*/

/** so the problem stats that return the index of the target where it is found in the array 
 * and if it is not found return the index where it would be if it were inserted in order
 */
// SO WE USE BINARY SEARCH ALGORITHM TO SOLVE THIS PROBLEM 
// MORE SPECIFICALLY WE ARE IMPLEMENTING LOWER BOUND SEARCH ALGORITHM

///AProach
/*
we first initialize two pointers low and high to the start and end of the array respectively
then we run the loop until low <= high
in each iteration we calculate the mid 
then we chck that arr[mid] >= target
if it is true then we update the high to mid - 1
and ans = mid
else we update the low to mid + 1
*/
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
    public:
        int searchInsert(vector<int>& nums, int k) {
           int low = 0;
           int high = nums.size() - 1 ;
           int ans = nums.size(); // we initialize ans to the size of the array because suppose element is at the last of the array suppose:- 
                                  // nums = [1,3,5,6] and target = 7 then we will return
                                  // 4 because it is the index where it would be if it were inserted in order
           while(low <= high){
            int mid = (low + high)/2;
            if(nums[mid] >= k){
                ans = mid;
                high = mid - 1;
            }else{
                low = mid + 1;
            }
           }
           return ans;
        }
    };