/*
Given two sorted arrays a[] and b[], where each array may contain duplicate elements , the task is to return the elements in the union of the two arrays in sorted order.

Union of two arrays can be defined as the set containing distinct common elements that are present in either of the arrays.
Examples:

Input: a[] = [1, 2, 3, 4, 5], b[] = [1, 2, 3, 6, 7]
Output: 1 2 3 4 5 6 7
Explanation: Distinct elements including both the arrays are: 1 2 3 4 5 6 7.
Input: a[] = [2, 2, 3, 4, 5], b[] = [1, 1, 2, 3, 4]
Output: 1 2 3 4 5
Explanation: Distinct elements including both the arrays are: 1 2 3 4 5.
Input: a[] = [1, 1, 1, 1, 1], b[] = [2, 2, 2, 2, 2]
Output: 1 2
Explanation: Distinct elements including both the arrays are: 1 2.
Constraints:
1  <=  a.size(), b.size()  <=  105
-109  <=  a[i] , b[i]  <=  109
*/

/** i was able to solve this with brute force approach using set : TC :- O((n + m) . log(n + m)) SC :- O(n + m)  **/

// class Solution {
//   public:
//     // a,b : the arrays
//     // Function to return a list containing the union of the two arrays.
//     vector<int> findUnion(vector<int> &a, vector<int> &b) {
//         // Your code here
//         set<int> answer;
//         vector<int> ans;
//         for(int i = 0 ; i < a.size() ; i++){
//             answer.insert(a[i]);
//         }
//         for(int i = 0 ; i< b.size() ; i ++){
//             answer.insert(b[i]);
            
            
//         }
        
//         for(auto it : answer){
//             ans.push_back(it);
//         }
        
        
//         // return vector with correct order of elements
//         return ans;
//     }
// };

/** then i made the TC :- O(m+n) SC :- O(m+n) by using two pointers approach : first i loop through both the arrays and insert elements
 * based on the smaller one
 *  **/
#include <vector>
using namespace std;
class Solution {
  public:
    // a,b : the arrays
    // Function to return a list containing the union of the two arrays.
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // Your code here
        // set<int> answer;
        // vector<int> ans;
        // for(int i = 0 ; i < a.size() ; i++){
        //     answer.insert(a[i]);
        // }
        // for(int i = 0 ; i< b.size() ; i ++){
        //     answer.insert(b[i]);
            
            
        // }
        
        // for(auto it : answer){
        //     ans.push_back(it);
        // }
        
        
        // // return vector with correct order of elements
        // return ans;
        
        vector<int> answer;
        int i = 0 , j = 0 ;
        while(i < a.size() && j < b.size()){
            if(a[i] <= b[j]){
                if(answer.size() == 0 ||  answer.back() != a[i]){
                      answer.push_back(a[i]);
                }
              
                i++;
            }else{
                if(answer.size() == 0 ||  answer.back() != b[j]){
                        answer.push_back(b[j]);
                }
            
                j++;
            }
            
        }
        while(i < a.size()  ){
             if(answer.size() == 0 ||  answer.back() != a[i]){
                answer.push_back(a[i]);
                
            }
            i++;
            
             
        }
          while(j < b.size()  ){
             if(answer.size() == 0 ||  answer.back() != b[j]){
                answer.push_back(b[j]);
                
            }
            j++;
            
             
        }
       
            
        
       return answer;
    }
};