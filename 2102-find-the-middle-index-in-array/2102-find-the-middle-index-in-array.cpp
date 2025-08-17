class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int sum = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            sum += nums[i];
        }

        int l = 0;
        int r = 0;
        for(int i = 0 ; i< nums.size() ; i++){
             r = sum - l - nums[i];

            if(r == l){
                return i ; 
                break;
            } 

            l += nums[i];
        }

        return -1;
        
    }
};