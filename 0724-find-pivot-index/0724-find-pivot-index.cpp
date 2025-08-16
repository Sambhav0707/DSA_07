class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0;
        for(int i = 0 ; i < nums.size() ; i++){
         sum += nums[i];
        }

        int left = 0;
        int r = 0;

         
        for (int i = 0; i < nums.size(); i++) {
            int right = sum - left - nums[i];
            if (left == right) return i;
            left += nums[i];  // update left AFTER checking
        }
        return -1;
    }
};