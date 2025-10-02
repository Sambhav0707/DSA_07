class Solution {
public:
    vector<int>prefixMax(vector<int>& height){
        int n = height.size();
        vector<int>ans(n , 0);
        ans[0] = height[0];
        for(int i = 1 ; i < height.size() ; i++){

            ans[i] = max(ans[i-1] , height[i]);

        }

        return ans;
    }
     vector<int>suffixMax(vector<int>& height){
        int n = height.size();
        vector<int>ans(n , 0);
        ans[n-1] = height[n-1];
        for(int i = n-2 ; i >=0 ; i--){

            ans[i] = max(ans[i+1] , height[i]);

        }

        return ans;
    }
    int trap(vector<int>& height) {

        vector<int> preffix = prefixMax(height);
        vector<int> suffix = suffixMax(height);

        int total = 0;

        for(int i = 0 ; i < height.size() ; i++){
            int preffixMax = preffix[i];
            int suffixMax = suffix[i];

            if(height[i] < preffixMax && height[i] < suffixMax){
                total += min(preffixMax , suffixMax) -  height[i];
            }

        }

        return total;
    

        
    }
};