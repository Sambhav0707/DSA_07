class Solution {
public:
    int thirdMax(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        sort(nums.begin() , nums.end());
        int count = 1;
        int last = nums[nums.size() - 1];
        for(int i = nums.size() - 2 ; i >= 0 ; i--){
            if(nums[i] < last){
                count++;
                last = nums[i];
            }
            if(count == 3){
                return nums[i];
            }
        }

        return nums[nums.size() - 1];
    }
};