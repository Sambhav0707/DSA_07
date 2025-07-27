/*
Given an m x n matrix, return true if the matrix is Toeplitz. Otherwise, return false.

A matrix is Toeplitz if every diagonal from top-left to bottom-right has the same elements.

 

Example 1:


Input: matrix = [[1,2,3,4],[5,1,2,3],[9,5,1,2]]
Output: true
Explanation:
In the above grid, the diagonals are:
"[9]", "[5, 5]", "[1, 1, 1]", "[2, 2, 2]", "[3, 3]", "[4]".
In each diagonal all elements are the same, so the answer is True.
Example 2:


Input: matrix = [[1,2],[2,2]]
Output: false
Explanation:
The diagonal "[1, 2]" has different elements.
 

Constraints:

m == matrix.length
n == matrix[i].length
1 <= m, n <= 20
0 <= matrix[i][j] <= 99
 

Follow up:

What if the matrix is stored on disk, and the memory is limited such that you can only load at most one row of the matrix into the memory at once?
What if the matrix is so large that you can only load up a partial row into the memory at once?

*/

/** so the problem stats that the we have to return true if the diagonal elements are same other wise return false */

/*
so the intuition is that if [i] [j] is equal to [i+1] [j+1] then it is a toeplitz
other wise return false 
and for the edge cases like the there is one coloumn and row then it is a toeplitz

 */
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
    public:
        bool isToeplitzMatrix(vector<vector<int>>& matrix) {
            
          
            int m = matrix.size();
            int n = matrix[0].size();
            bool isDiagonal;
            if(m == 1 && n ==1){
                return true;
            }
           
            
            for(int i = 0 ; i < m ; i++ ){
                for(int j = 0 ; j < n ; j++){
                   if(i+1 < m && j+1 < n){ if(matrix[i][j] == matrix[i+1][j+1]){
                     isDiagonal = true;
                    }else{
                      return false;
                       break;
                    }}
                }
                
            }
            return isDiagonal;
        }
        
    };