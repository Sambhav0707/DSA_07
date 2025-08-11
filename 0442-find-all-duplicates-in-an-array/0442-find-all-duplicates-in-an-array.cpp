class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int> mpp;
    vector<int>ans;

    for(int i = 0 ; i< nums.size() ; i++){
        mpp[nums[i]]++;

    }
    for(auto it : mpp){
        if(it.second == 2){
            ans.push_back(it.first);
        }
    }
    return ans;
    }
};