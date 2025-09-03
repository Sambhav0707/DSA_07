class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l = 0;
        int r = 0;
        int sum = 0;
        int minL = INT_MAX;
        while(r<nums.size()){
        
        sum += nums[r];

        while(sum >= target){
            minL =min(minL , r-l+1);
            sum -= nums[l];
            l++;
        }
         r++; 

         
        }

         if(minL == INT_MAX) return 0;
         return minL;
        
    }
};