/*
Given an array of positive integers arr[], return the second largest element from the array. If the second largest element doesn't exist then return -1.

Note: The second largest element should not be equal to the largest element.

Examples:

Input: arr[] = [12, 35, 1, 10, 34, 1]
Output: 34
Explanation: The largest element of the array is 35 and the second largest element is 34.
Input: arr[] = [10, 5, 10]
Output: 5
Explanation: The largest element of the array is 10 and the second largest element is 5.
Input: arr[] = [10, 10, 10]
Output: -1
Explanation: The largest element of the array is 10 and the second largest element does not exist.
Constraints:
2 ≤ arr.size() ≤ 105
1 ≤ arr[i] ≤ 105
*/

///the solution that i wrote only passed 6 test :- 
// class Solution {
//   public:
//     int getSecondLargest(vector<int> &arr) {
//         // code here
//         int secL = 0, largest = arr[0] ;
        
//         for(int i = 0 ; i< arr.size() ;){
//             if(largest < arr[i+1]){
//                 largest = arr[i+1];
//               if(secL)  secL = arr[i];
//                 i++;
//             }else if(largest > arr[i+1]){
//                 if(secL < arr[i+1]) secL = arr[i+1] ;
//                 i++;
//             }else{
//                 i++;
//             }
//         }
        
//         if(secL != largest && secL != 0){
//             return secL;
//         }else{
//             return -1;
//         }
     
//     }

/** the problem was :- 
 a) Accessing arr[i+1] without bounds check
If i == arr.size() - 1, accessing arr[i+1] is undefined behavior.

Could crash or give garbage values.

b) Incorrect update of secL
You do secL = arr[i] when a new largest is found.

But arr[i] may not be the correct previous largest — you're assuming that elements are increasing in order, which is not guaranteed.
 */


/** the optimal solution with Tc O(N) :- */
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int secL = 0, largest = 0 ;
        
        for(int i = 0 ; i< arr.size() ;){
            if(largest < arr[i]){
                secL = largest;
                largest = arr[i];
             
                i++;
            }else if(largest > arr[i]){
                if(secL < arr[i]) secL = arr[i] ;
                i++;
            }else{
                i++;
            }
        }
        
        if(secL != largest && secL != 0){
            return secL;
        }else{
            return -1;
        }
     
    }
};