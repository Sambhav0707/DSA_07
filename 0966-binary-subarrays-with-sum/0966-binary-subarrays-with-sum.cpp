class Solution {
public:
    int helper(vector<int>& nums, int goal){
        int n = nums.size();
        int left = 0 , right = 0;
        long long sum = 0,ans = 0;
        for(right=0;right<n;right++){
            sum += nums[right];
            while(sum>goal){
              if(left<n)  sum-=nums[left];
              else return 0;
                left++;
            }
            if(sum<=goal) ans+=right-left+1;
        }
        return ans;
    }

    int numSubarraysWithSum(vector<int>& nums, int goal) {
    return helper(nums,goal)-helper(nums,goal-1);

        
                                    
    }
};