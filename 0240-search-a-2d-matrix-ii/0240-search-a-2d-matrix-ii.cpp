class Solution {
public:
    bool isRange(vector<int>& row , int target , int cols){
        int l = 0 ;
        int h = cols - 1;
        while(l<=h){
            int mid = (l+h)/2;
            if(row[mid] == target){
                return true;
                break;
            } 
            if(row[mid]>target){
                h = mid - 1;
            }else{
                l = mid + 1;
            }

        }

        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // int rows = matrix.size();
        // int cols = matrix[0].size();
        

        // for(int i = 0; i<rows ; i++){
        //     if(isRange(matrix[i] , target , cols) == true){
        //         return true;
        //         break;
        //     }
        // }

        // return false;


        //OPTIMAL 
        int row = 0 ;
        int col = matrix[0].size() - 1;

        while(row<matrix.size() && col >= 0){
            if(matrix[row][col] == target){
                return true;
                break;
            }

            if(matrix[row][col] > target){
                col--;
            }else{
                row++;
            }
        }

        return false;

        
    }
};