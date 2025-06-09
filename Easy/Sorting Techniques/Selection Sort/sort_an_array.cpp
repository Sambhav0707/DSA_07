// Given an array arr, use selection sort to sort arr[] in increasing order.

// Examples :

// Input: arr[] = [4, 1, 3, 9, 7]
// Output: [1, 3, 4, 7, 9]
// Explanation: Maintain sorted (in bold) and unsorted subarrays. Select 1. Array becomes 1 4 3 9 7. Select 3. Array becomes 1 3 4 9 7. Select 4. Array becomes 1 3 4 9 7. Select 7. Array becomes 1 3 4 7 9. Select 9. Array becomes 1 3 4 7 9.
// Input: arr[] = [10, 9, 8, 7, 6, 5, 4, 3, 2, 1]
// Output: [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
// Input: arr[] = [38, 31, 20, 14, 30]
// Output: [14, 20, 30, 31, 38]
// Constraints:
// 1 ≤ arr.size() ≤ 103
// 1 ≤ arr[i] ≤ 106



// solution :- 

#include <vector>
using namespace std;
class Solution {
  public:
    // Function to perform selection sort on the given array.
    void selectionSort(vector<int> &arr) {
        
        
        // code here
        
        for (int i = 0 ; i < arr.size() - 1 ; i ++ ){
            int min = i;
            
            for (int j = i ; j < arr.size()  ; j++){
                if(arr[j] < arr[min]){
                    min = j ;
                    
                }
            }
            
            swap(arr[i] , arr[min]);
        }
        
    }
};


//where i was wrong initialy : i was setting the range of inner loop to arr.size() - 1 instead of arr.size() which was causing the last element to be left unsorted.  and also i was not swapping the elements correctly.   the correct way to swap is to use the swap function of the vector class.  the swap function swaps the elements at the given indices.  so in this case, we are swapping the elements at index i and min.  this is the correct way to swap the elements in the selection sort algorithm.


// class Solution {
//   public:
//     // Function to perform selection sort on the given array.
//     void selectionSort(vector<int> &arr) {
        
        
//         // code here
        
//         for (int i = 0 ; i < arr.size() - 2 ; i ++ ){
//             int min = i;
            
//             for (int j = i ; j < arr.size() -1 ; j++){
//                 if(arr[j] < arr[min]){
//                     min = j ;
                    
//                 }
//             }
            
//             swap(arr[i] , arr[min]);
//         }
        
//     }
// };