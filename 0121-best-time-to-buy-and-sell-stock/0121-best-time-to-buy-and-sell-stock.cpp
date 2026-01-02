class Solution {
public:
    int maxProfit(vector<int>& nums) {
       
       int highest = 0;
       if(nums.size() == 1){
        return 0;
       }
    //    for(int i = 0; i < nums.size() ; i++){
    //     for(int j = i+1 ; j < nums.size(); j++){
    //         int curr = nums[j] - nums[i];
    //         highest = max(highest , curr);
    //     }
    //    }
    int minn = nums[0];
    
   for(int i = 1 ; i<nums.size();i++){
   int  cost = nums[i] - minn;
   highest = max(highest , cost);
   minn = min(nums[i] , minn);
   }

      
       return highest;
    }
};