class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int rows = mat.size();
        int cols = mat[0].size();
        int maxEle = INT_MIN;
        vector<vector<int>>ans;
        for(int i = 0 ; i<rows ; i++){
            for(int j = 0 ; j<cols ;j++){
                maxEle = max(maxEle , mat[i][j]);

                if(mat[i][j] == maxEle){
                    ans.push_back({i,j});
                }

            }
        }

        return {ans[ans.size()-1][0] ,ans[ans.size()-1][1] };
        
    }
};