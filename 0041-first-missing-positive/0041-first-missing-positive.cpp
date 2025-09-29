class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_map<int , int>mp;

        for(int i  = 0; i < nums.size() ; i++){
            mp[nums[i]]++;
        }

        int ans = 1;

        for(auto it : mp){
            if(mp.find(ans) == mp.end()){
                break;
            }else{
                ans++;
            }
        }

        return ans;

        
        
    }
};