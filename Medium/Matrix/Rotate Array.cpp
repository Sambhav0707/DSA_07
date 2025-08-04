/*
You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).

You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.

 

Example 1:


Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [[7,4,1],[8,5,2],[9,6,3]]
Example 2:


Input: matrix = [[5,1,9,11],[2,4,8,10],[13,3,6,7],[15,14,12,16]]
Output: [[15,13,2,5],[14,3,4,1],[12,6,8,9],[16,7,10,11]]
 

Constraints:

n == matrix.length == matrix[i].length
1 <= n <= 20
-1000 <= matrix[i][j] <= 1000
*/

/** so the intuition is that we have to try to roatate the matrix by 90
 */

 /*
 so if you look closely the brute force approah is that we will take a new matrix of n * n
 then we will put the elements at their desired position.
 
    [1,2,3],
    [4,5,6],
    [7,8,9]
  
    this is the matrix we have to rotate.
    so what observation do we have here?
    so lets take a look at the rotated matrix.
    [
        [7,4,1],
        [8,5,2],
        [9,6,3]
    ]                          i  j             j  n - i - 1     
        so the 1 which was at [0][0] is now at [0][2]
        and the 2 which was at [0][1] is now at [1][2]
        and the 3 which was at [0][2] is now at [2][2]
        and the 4 which was at [1][0] is now at [0][1]
        and the 5 which was at [1][1] is now at [1][1]
        and the 6 which was at [1][2] is now at [2][1]
        and the 7 which was at [2][0] is now at [0][0]
        and the 8 which was at [2][1] is now at [1][0]
        and the 9 which was at [2][2] is now at [2][0]

        so the thing here is that the jth column of the original matrix is the i th row of the rotated matrix.
        and the ith row of the original matrix is the jth column of the rotated matrix with n - 1 - i index.

        the TC is O(n^2) and the SC is O(n^2)

 */
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

class Solution {
    public:
    void rotate(vector<vector<int>>& nums) {
        // since the matrix is n * n we can take row and coloumn as n
        int n = nums.size();
        vector<vector<int>>ans(n , vector<int>(n , 0));
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n ;j++){
                ans[j][n - 1 - i] = nums[i][j];
            }

        }
        nums = ans;

    }
};


int main(){

     vector<vector<int>>nums = {{1,2,3} , {4,5,6} , {7,8,9}};
     Solution s;
     s.rotate(nums);
     for(int i = 0 ; i < nums.size() ; i++){
        for(int j = 0 ; j < nums[i].size() ; j++){
            cout << nums[i][j] << " ";
        }
        cout << endl;
     }
   
     
    return -1;
}

/** now the optimal approach is that we will rotate the matrix in place.
 * so first we will take the transpose of the matrix.
 * then we will reverse each row of the matrix.
 */

 /*
 so to transpose the matrix we will swap the elements at the diagonal.
    [1,2,3],
    [4,5,6],
    [7,8,9]

    so the transpose of the matrix will be
    
        [1,4,7],
        [2,5,8],
        [3,6,9]
    

   If we look closely the diagonal elements will remain the same.

   so we have to swap the elements at the diagonal.
   2 and 4 will swap places.
   3 and 7 will swap places.
   6 and 8 will swap places.

   so the intuition is that [0][1] will swap with [1][0]
   [0][2] will swap with [2][0]
   [1][2] will swap with [2][1]

   so [i][j] will swap with [j][i]

   so we are running the i th loop for the row from 0 to n - 1
   and the j th loop for the coloumn from i + 1 to n 
   and then we will swap the elements at the diagonal.
   and then we will reverse each row of the matrix.


    the TC is O(n^2) and the SC is O(1)

 
 */

 class Solution {
    public:
    void rotate(vector<vector<int>>& nums) {
        int n = nums.size();
        for(int i = 0 ; i < n - 1 ; i++){
            for(int j = i + 1 ; j < n ; j++){
                swap(nums[i][j] , nums[j][i]);
            }
        }

        for(int i = 0 ; i < n ; i++){
            reverse(nums[i].begin() , nums[i].end());
        }
    }
 };