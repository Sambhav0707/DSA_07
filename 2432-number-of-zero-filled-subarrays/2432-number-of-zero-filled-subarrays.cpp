class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long ans = 0;
        long long len = 0;

      
      long long l = 0;
       for(long long r  = 0 ; r < nums.size() ; r++){
        if(nums[r] == 0){
              l = r;
                while(r<nums.size() && nums[r] == 0){
                    r++;
                 

                }
                len = r-l;
                ans = ((len*(len+1))/2) + ans;
            }
       }

        return ans;
        
    }
};