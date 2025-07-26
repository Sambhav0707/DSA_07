/*
Given a sorted array arr[] and an integer x, find the index (0-based) of the largest element in arr[] that is less than or equal to x. This element is called the floor of x. If such an element does not exist, return -1.

Note: In case of multiple occurrences of ceil of x, return the index of the last occurrence.

Examples

Input: arr[] = [1, 2, 8, 10, 10, 12, 19], x = 5
Output: 1
Explanation: Largest number less than or equal to 5 is 2, whose index is 1.
Input: arr[] = [1, 2, 8, 10, 10, 12, 19], x = 11
Output: 4
Explanation: Largest Number less than or equal to 11 is 10, whose indices are 3 and 4. The index of last occurrence is 4.
Input: arr[] = [1, 2, 8, 10, 10, 12, 19], x = 0
Output: -1
Explanation: No element less than or equal to 0 is found. So, output is -1.
Constraints:
1 ≤ arr.size() ≤ 106
1 ≤ arr[i] ≤ 106
0 ≤ x ≤ arr[n-1]
*/


/** SO the problem is stating that return the index of the largest number that is <= x
 * so we need to find the largest number that is <= x
 * firstly i will explain the brute force solution :- 
 */

// THE BRUTE FORCE SOLUTION
/*
so the approach involves looping through the array and checking each element to see if it is <= x
if it is then we check if it is the largest number that is <= x
if it is then we return the index of that number
so TC:- O(n) where n is the size of the array
SC:- O(1)
*/
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
    public:
      int findFloor(vector<int>& arr, int x) {
          // code here
          if(x == 0){
              return -1; // if x is 0 then return -1 this is the edge case
          }
          int largest = -1; // initialize the largest number to -1
          for(int i = 0 ; i < arr.size() ; i++){
              if(arr[i] <= x){
                  largest = max(largest , i); // if the current number is <= x then update the largest number based on the max function
              }
          }
          return largest;
         
      }
      
      
  };

  // THE OPTIMAL SOLUTION USING BINARY SEARCH
 /*
 SO THE OPTIMAL WAY IS TO USE BINARY SEARCH
 by defining the low and high points and keeping thhe largest = -1 initially 
 first we run a while loop until low <= high
 inside the loop we calculate the mid point and check if arr[mid] <= x
 then we keep on updating the largest number based on the max function
 then we update the low and high points based on the condition


 */

 class Solution {
    public:
      int findFloor(vector<int>& arr, int x) {
         
          
          int low = 0;
          int high = arr.size() - 1;
          int largest = -1;
          if(x == 0){
              return -1;
          }
          while(low <= high){
              int mid = (low + high)/2;
              if(arr[mid] <= x){
                  largest = max(largest , mid);
                  low = mid + 1;
              }else{
                  high = mid -1;
              }
          }
          return largest;
      }
      
      
  };