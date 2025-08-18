/*
Given an array arr[] of integers, where each element arr[i] represents the number of pages in the i-th book. You also have an integer k representing the number of students. The task is to allocate books to each student such that:

Each student receives atleast one book.
Each student is assigned a contiguous sequence of books.
No book is assigned to more than one student.
The objective is to minimize the maximum number of pages assigned to any student. In other words, out of all possible allocations, find the arrangement where the student who receives the most pages still has the smallest possible maximum.

Note: If it is not possible to allocate books to all students, return -1.

Examples:

Input: arr[] = [12, 34, 67, 90], k = 2
Output: 113
Explanation: Allocation can be done in following ways:
=> [12] and [34, 67, 90] Maximum Pages = 191
=> [12, 34] and [67, 90] Maximum Pages = 157
=> [12, 34, 67] and [90] Maximum Pages = 113.
The third combination has the minimum pages assigned to a student which is 113.
Input: arr[] = [15, 17, 20], k = 5
Output: -1
Explanation: Since there are more students than total books, it's impossible to allocate a book to each student.
Constraints:
1 ≤ arr.size() ≤ 106
1 ≤ arr[i], k ≤ 103
*/
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
class Solution {
    public:
      /*
      So in this we have a idea that the max book pages that a
      student can get is sum of all the elements 
      that is :- int max = accumulate(arr.begin() , arr.end() , 0)
      and the least amount is the maximum element in the array 
      that is :- *max_element(arr.begin() , arr.end())
      
      now we need to find that if the element from this range 
      is pssible to allocate the books to all the student 
      may be we can write a function :- 
      we can itirate over the oroginal array 
      and take the element of the range(min , max) 
      and what we do is like we set the current student as 1
      and we add the element to the sum now :- 
      we check that if the sum is greater than the element chosen 
      from the range if it is greater than simply increase the 
      current student by 1 if it is smaller just move on 
      now after the loop if the current student number is 
      greater than the element in that range is not possible 
      if it is smaller or eqaul than it is possible 
      */
      bool isPossible(vector<int> &arr, int k , int minB){
          int s = 1;
          int sum = 0;
          for(int i = 0; i < arr.size() ; i++){
              sum += arr[i];
              if(sum <= minB){
                  
              }else{
                  s++;
                  sum = arr[i];
              }
              
              
          }
          
          if(s <= k){
              return true;
              
          }
          
          return false;
      }
      int findPages(vector<int> &arr, int k) {
          
       int mine = *max_element(arr.begin(), arr.end()); 
       
       int maxe = accumulate(arr.begin(), arr.end(), 0);
       
      //  for(int i = mine ; i <= maxe ; i++){
      //      if(isPossible(arr , k , i) == true){
      //          return i;
      //          break;
      //      }
      //  }
      if(arr.size() < k){
          return -1;
      }
      int ans = -1;
      while(mine<=maxe){
          int mid = (mine + maxe)/2;
         if(isPossible(arr , k , mid) == true){
              ans = mid;
             maxe = mid -1;
             
         }else{
             mine = mid + 1;
         }
      }
      
      
       
       return ans;
          
         
        
          
      }
  };
