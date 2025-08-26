class Solution {
public:
    
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int rows = mat.size();
        int cols = mat[0].size();

       //BRUTE FORCE

       for(int  i = 0 ; i<rows ; i++){
        for(int j = 0 ; j <cols ; j++){
            if(mat[i][j] == target){
                return true;
                break;
            }
        }
       }

       return false;
        
    }
};