class Solution {
public:
    int rowIndex(vector<vector<int>>& mat , int rows , int cols , int currentCol){
        int maxVal = -1;
        int index = -1;
        for(int i = 0 ; i<rows ; i++){
            if(mat[i][currentCol] > maxVal ){
                maxVal = mat[i][currentCol];
                index = i;
            }
        }
        return index;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int rows = mat.size();
        int cols = mat[0].size();
        //BRUTE FORCE 

        // int maxEle = INT_MIN;
        // vector<vector<int>>ans;
        // for(int i = 0 ; i<rows ; i++){
        //     for(int j = 0 ; j<cols ;j++){
        //         maxEle = max(maxEle , mat[i][j]);

        //         if(mat[i][j] == maxEle){
        //             ans.push_back({i,j});
        //         }

        //     }
        // }

        // return {ans[ans.size()-1][0] ,ans[ans.size()-1][1] };

        //OPTIMAL
        int l = 0;
        int h = cols - 1;
        while(l <= h){
            int mid = (l+h)/2;

            int row = rowIndex(mat, rows , cols , mid);

            int left = -1;
            if(mid -1 >= 0) left = mat[row][mid - 1];
            int right = -1;
            if(mid + 1 < cols) right = mat[row][mid+1];

            if(mat[row][mid] > left && mat[row][mid] > right){
                return {row,mid};
                break;
            }
            else if(mat[row][mid] < left && mat[row][mid] > right){
                h = mid -1;
            }else{
                l = mid +1;
            }



        }

        return {-1,-1};
        
    }
};