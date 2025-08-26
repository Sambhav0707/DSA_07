class Solution {
public:
   
    bool isInRange(vector<int>& mat , int target){
        int low = 0;
        int high = mat.size() - 1;

        while(low<=high){
            int mid = (low + high)/2;
            if(mat[mid] == target){
                return true;
                break;
            }
            if(mat[mid] > target){
                high = mid - 1;

            }else{
                low = mid + 1;
            }
        }

        return false;

    }
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int rows = mat.size();
        int cols = mat[0].size();

       //BRUTE FORCE

    //    for(int  i = 0 ; i<rows ; i++){
    //     for(int j = 0 ; j <cols ; j++){
    //         if(mat[i][j] == target){
    //             return true;
    //             break;
    //         }
    //     }
    //    }

    //    return false;

    // Optimal
   for(int i = 0 ; i< rows ; i++){
    if(mat[i][0] <= target && target <= mat[i][cols - 1]){
      return isInRange(mat[i] , target);
    }
   }

   return false;
        
    }
};