class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
    //     unordered_map<int,int> mpp;
    // vector<int>ans;

    // for(int i = 0 ; i< nums.size() ; i++){
    //     mpp[nums[i]]++;

    // }
    // for(auto it : mpp){
    //     if(it.second == 2){
    //         ans.push_back(it.first);
    //     }
    // }
    // return ans;

    vector<int>ans;
    sort(nums.begin() , nums.end());

    for(int i = 0;i<nums.size() -1 ; i++){
        if(nums[i] == nums[i+1]){
            ans.push_back(nums[i]);
        }

    }
    return ans;
    }
};