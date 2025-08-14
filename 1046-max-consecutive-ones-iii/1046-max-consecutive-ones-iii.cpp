#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        // int r = 1;
        // int l =0;
        // int ans = k;
        // int count = 0;
        // int maxx = 1;

        // while(r<nums.size()){
        //     if(nums[l] == 0 && ans > 0){
        //         nums[l] = 1;
        //         count++;
        //         maxx = max(maxx,count);
        //         ans--;
        //     }
        //     if(nums[r] == 0 && ans>0){
        //         nums[r] = 1;
        //         count++;
        //         maxx = max(maxx,count);
        //         ans--;
        //         r++;
        //     }
        //     if(nums[r] == 1){
        //         count++;
        //         maxx = max(maxx,count);
        //         r++;
        //     }
        //     if(nums[r] == 0 && ans<= 0){
        //         count = 0;
        //         l = r;
        //         r++;
        //         ans = k;
        //     }

        // }

        // return maxx;

        int l = 0, r = 0;
        int ans = 0;
        int flips = k;

        while (r < nums.size()) {
            // If current element is zero, use a flip
            if (nums[r] == 0) {
                flips--;
            }

            // If flips go below zero, move left pointer until we restore flips
            while (flips < 0) {
                if (nums[l] == 0) {
                    flips++;
                }
                l++;
            }

            ans = max(ans, r - l + 1);
            r++;
        }

        return ans;

        
    }
};