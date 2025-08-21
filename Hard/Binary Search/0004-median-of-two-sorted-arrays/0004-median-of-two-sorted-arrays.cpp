#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        for(int i  = 0 ; i<nums2.size() ; i++){
            nums1.push_back(nums2[i]);
        }

        sort(nums1.begin() , nums1.end());
        float ans = 0.0;
        if(nums1.size() % 2 == 0){
            int a = nums1[(nums1.size()/2)-1];
            int b = nums1[nums1.size()/2];

            ans = ((double)a + b) / 2;
            return ans;

        }

        ans = nums1[nums1.size()/2];

        return ans;

        
        
    }

    // will see the binary search solution later
};