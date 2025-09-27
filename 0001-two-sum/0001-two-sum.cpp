class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int k) {

        unordered_map<int , int>mp;
        
        for(int i  = 0 ; i < nums.size() ; i++){
            if(mp.find(k - nums[i]) != mp.end()){
                return {i , mp[k - nums[i]] };
            }

            mp[nums[i]] = i;
        }

        return {};
       
        
 }

       
};