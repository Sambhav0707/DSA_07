class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int rows = mat.size();
        int col = mat[0].size();
        int sum = 0 ;
        int rowNumber = INT_MAX;
       
         
        for(int  i  =  0 ; i < rows ; i++){
            int count = 0;
            for(int j = 0; j< col ; j++){
                if(mat[i][j] == 1){
                    count++;
                }
            }
           
            if(count > sum){
              sum = count;
              rowNumber = i;
            }
            if(count == sum){
                rowNumber = min(rowNumber ,i);
            }
           
        }

        return {rowNumber , sum};
 

        
        
    }
};