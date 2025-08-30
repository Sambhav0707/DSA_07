class Solution {
public:
    int numberofSubArrayWuthAtmostK(vector<int>& nums, int k){
        int ans = 0;
        int l = 0;
        int r = 0;
        unordered_map<int,int>mpp;
       
        while(r<nums.size()){
             mpp[nums[r]]++;
             while(mpp.size() > k){
                mpp[nums[l]]--;
                if(mpp[nums[l]] == 0) mpp.erase(nums[l]);
                l++;
             }
             ans =  ans + (r-l+1);
            
            r++;

        }

        return ans;


        
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
       int k1 = numberofSubArrayWuthAtmostK(nums , k);
       int k2 = numberofSubArrayWuthAtmostK(nums , k -1);
        return  (k1-k2);
       
    }
};
