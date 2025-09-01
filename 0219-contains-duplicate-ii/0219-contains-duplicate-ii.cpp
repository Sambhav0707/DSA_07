class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        //BRUTE FORCE
        // for(int i = 0 ; i < nums.size() ; i++){
        //     for(int j = i+1 ; j < nums.size() ; j++){
        //         if(nums[i] == nums[j]){
        //             if(abs(i-j) <= k){
        //                 return true;
        //                 break;
        //             }
        //         }
        //     }
        // }

        // return false;

        //BETTER
        // unordered_map<int , int>mpp;
        // for(int i = 0; i<nums.size() ; i++){
            

        //     auto it = mpp.find(nums[i]);
        //     if(it != mpp.end()){
        //        if( it->second != i){
        //         if(abs(i - it->second) <= k){
        //             return true;
        //             break;
        //         }
        //        }
        //     }
        //     mpp[nums[i]] = i;
        // }
        // return false;

        //OPTIMAL 
         set<int>stt;

        for (int i = 0; i < nums.size(); i++) {
            
            if (stt.count(nums[i])) {
                return true;
            }
            stt.insert(nums[i]);
            if (stt.size() > k) {
                stt.erase(nums[i - k]);
            }
        }

        return false;

        
    }
};