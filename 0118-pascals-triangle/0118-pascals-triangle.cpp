class Solution {
public:
 vector<int> ncr(int n){
    long long ans = 1;
    vector<int>answer;
    answer.push_back(ans);
    for(int i = 1 ; i < n ; i++){
        ans = ans * (n - i);
        ans = ans / i;
        answer.push_back(ans);
    }

    return answer;

   }
    vector<vector<int>> generate(int numRows) {
         vector<vector<int>> ans;
        
        for(int i = 1 ; i <= numRows ; i++){

         vector<int>temp = ncr(i);

         ans.push_back(temp);

        }

        return ans;

        

        
    }
};