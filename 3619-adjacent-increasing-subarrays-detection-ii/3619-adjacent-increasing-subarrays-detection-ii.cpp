class Solution {
public:
    int maxIncreasingSubarrays(vector<int>& nums) {

        int cur = 1;
        int prev = 0;
        int k = 0;

        for(int i = 1 ; i < nums.size() ; i++){
            if(nums[i] > nums[i-1]){
                cur += 1;

            }else{

                prev = cur;
                cur = 1;
            }

            k = max(k , cur/2);
            k = max(k , min(cur ,prev));
        }

        return k;
    }
};