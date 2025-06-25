/*
Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

 

Example 1:

Input: nums = [3,0,1]

Output: 2

Explanation:

n = 3 since there are 3 numbers, so all numbers are in the range [0,3]. 2 is the missing number in the range since it does not appear in nums.

Example 2:

Input: nums = [0,1]

Output: 2

Explanation:

n = 2 since there are 2 numbers, so all numbers are in the range [0,2]. 2 is the missing number in the range since it does not appear in nums.

Example 3:

Input: nums = [9,6,4,2,3,5,7,0,1]

Output: 8

Explanation:

n = 9 since there are 9 numbers, so all numbers are in the range [0,9]. 8 is the missing number in the range since it does not appear in nums.

 
 

 

 

Constraints:

n == nums.length
1 <= n <= 104
0 <= nums[i] <= n
All the numbers of nums are unique.
*/

///brute force solution
/** i tried with the approach where i try to run the two loops outer loop  in the range of 0 to n+1 and inner in the 
 * range of 0 to n. and at the starting of the outer loop i set a flag = 0 and then i check if the current number is in the array or not in the 
 * in the inner loop if it is then i set the flag = 1 and then i check at last in the outer loop that if the 
 * flag == 0 then return i the TC is O(n^2) and SC is O(1)
 */

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
       
        int num = 0;
        for(int i = 0 ; i < n+1 ;i++){
             int flag = 0;
            for(int j =0 ; j < n ; j++){
                if(nums[j] == i){
                    flag = 1;
                    break;
                }
            }
            if(flag == 0){
                num = i;

            }
             
        }
        return num;
        

       
        
       
        
    }
};


/** the problem i faced was :-  */

// You're very close, but there's one key issue with your code:
// You don't reset the flag variable inside the outer loop, so once flag = 1 for any value of i, it remains 1 for the rest of the loop. That causes the missing number to be missed.


// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         int n = nums.size();
//         int flag = 0;
//         int num = 0;
//         for(int i = 0 ; i < n+1 ;i++){
//             for(int j =0 ; j < n ; j++){
//                 if(nums[j] == i){
//                     flag = 1;
//                     break;
//                 }
//             }
//             if(flag == 0){
//                 num = i;

//             }
             
//         }
//         return num;       
//     }
// };

///Better solution using hashMap
/** i solved it in a better approach using hashMap in c++  with time complexity of O(2n) and space complexity of O(n)  */
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        vector<int> hash(n + 1, 0);
        int ans = 0;
        for(int i = 0 ; i< n ; i++){
            hash[nums[i]] = 1;
        }
        for(int i = 0 ; i<n+1 ;i++){
            if(hash[i] == 0){
                ans = i;
            }
        }
        return ans;
    }
};

/// optimal solution 
/** then i otimise the solution with TC = O(2n) and SC = O(1)  
 * as i first calculate the sum of all numbers from 0 to n and then sum of all numbers in the array
 * then the missing number is the difference between the two sums
 * **/
#include <vector>
#include <algorithm>
using namespace std;
// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         int n = nums.size();
//         int sum2=0;
       
//     int sum1 =  accumulate(nums.begin(), nums.end(), 0);
//     for(int i = 0 ; i< n+1 ; i++){
//         sum2 += i;

//     }
//     return sum2 - sum1;       
//     }
// };

/// otimap solution using XOR
/** then i used the xor solution with TC = O(n) and SC = O(1)  */

class Solution {
public:
    int missingNumber(vector<int>& nums) {
       int xor1 = 0 , xor2 = 0;
       for(int i = 0 ;i < nums.size();i++){
        xor1 = xor1^nums[i];
        xor2 = xor2 ^ i ;
       }
       xor2= xor2 ^ nums.size();
       return xor1 ^ xor2;
    }
};


