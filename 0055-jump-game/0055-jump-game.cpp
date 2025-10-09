class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size() - 1;
        int r = 0;
        int maxIndex = INT_MIN;
        if ( nums.size() == 1) return true;
        for(int i  = 0 ; i < nums.size() ; i++){

            maxIndex = max(maxIndex , nums[i] + i);

        }
       
       if(maxIndex >= n) return true;

     
        return false;
        
    }
};