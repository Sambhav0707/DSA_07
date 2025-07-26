/*
Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

If target is not found in the array, return [-1, -1].

You must write an algorithm with O(log n) runtime complexity.

 

Example 1:

Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]
Example 2:

Input: nums = [5,7,7,8,8,10], target = 6
Output: [-1,-1]
Example 3:

Input: nums = [], target = 0
Output: [-1,-1]
 

Constraints:

0 <= nums.length <= 105
-109 <= nums[i] <= 109
nums is a non-decreasing array.
-109 <= target <= 109
*/

/** so the problem stats that we have to return the first appearing index and the last appearing index of target value  */
/*
so first approach we can take is that take a vector ans and loop through every element in the array 
if the element is equal to the target then push it in the ans vector
then check if the ans size == 0 then return [-1,-1] else return the first and last element of the ans vector
and if the ans has only one element then return the first element of the ans vector and -1
TC : O(n) SC: O(1) Because we are only using the vector to solve the question 
*/\
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
    public:

        vector<int> searchRange(vector<int>& nums, int k) {
        vector<int> ans;
       
        for(int i  = 0 ; i < nums.size() ; i++){
            
            if(nums[i] == k ){
                ans.push_back(i);
               
            }
        }
        if(ans.size() == 0){
            return {-1,-1};
        } else if (ans.size() == 1){
            ans.push_back(ans[0]);
            return ans;
    
        }else{
            return {ans[0] , ans[ans.size() -1]};
        }
       
        
    }
        
    };

    // THE OPTIMAL SOLUTION IS AS FOLLOWS:- 
    /** we would create two functions of lowerbound and upperbound
     * then we check that the lowerbound is eqaul to the size of the array and the num[lowerbound] != target then return [-1,-1]
     * is the above condition is not met then we return the lowerbound and the upperbound - 1 , we do upperbound - 1 because the upperbound is the index of the first element that is greater than the target 
     */

     class Solution {
        public:
            int lowerbound(vector<int> nums , int k){
                int low = 0 , high = nums.size() - 1, ans = nums.size();
                while(low <= high){
                    int mid = (low + high)/2;
                    if(nums[mid] >= k){
                        ans = mid;
                        high = mid -1;
                    }else{
                         low = mid +1;
                       
                    }
                }
                return ans;
            }
            int upperbound(vector<int> nums , int k){
                int low = 0 , high = nums.size() - 1, ans = nums.size();
                while(low <= high){
                    int mid = (low + high)/2;
                    if(nums[mid] > k){
                        ans = mid;
                       high = mid -1;
                    }else{
                        
                         low = mid +1;
                    }
                }
                return ans ;
            }
            vector<int> searchRange(vector<int>& nums, int k) {
            if(nums.size() == 0){
            return {-1 , -1};
            }
          int first = lowerbound(nums , k);
          int last = upperbound(nums , k) ;
          if(first == nums.size() || nums[first] != k  ){
           return {-1, -1};
          }
          
         
          return {first , last -1};
          
        
        
           
        
            
            }
            
        };