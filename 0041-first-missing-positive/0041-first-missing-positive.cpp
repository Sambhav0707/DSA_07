class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        // unordered_map<int , int>mp;

        // for(int i  = 0; i < nums.size() ; i++){
        //     mp[nums[i]]++;
        // }

        // int ans = 1;

        // for(auto it : mp){
        //     if(mp.find(ans) == mp.end()){
        //         break;
        //     }else{
        //         ans++;
        //     }
        // }

        // return ans;

        // Add this cleanup loop first
for (int i = 0; i < nums.size(); ++i) {
    if (nums[i] <= 0) {
        nums[i] = nums.size() + 1; // Change to a number that's out of range
    }
}

        for(int  i  = 0 ; i<nums.size() ; i++){
         
            int abs_val = abs(nums[i]);
            if(abs_val <= nums.size()){

                if(nums[abs_val - 1] > 0) nums[abs_val - 1] *= -1;

            }
        }
      
        for(int  i  = 0 ; i<nums.size() ; i++ ){
            if(nums[i] > 0){
                return i + 1;
            }
        }
         
        return nums.size() + 1;

        
        
    }
};