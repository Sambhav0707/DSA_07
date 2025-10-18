class Solution {
public:
    int search(vector<int>& nums, int k) {
       int l = 0 , r = nums.size() - 1;
       while(l<=r){
        int mid = (l+r) / 2;

        if(nums[mid] == k){
            return mid;
        } else if(nums[mid] > k){
            r = mid - 1;
        }else{
            l = mid + 1;
        }

       }

       return -1;
    }
};