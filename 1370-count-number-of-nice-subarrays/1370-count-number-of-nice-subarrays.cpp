class Solution {
public:
    int numberOfSubarraysAtmostK(vector<int>& nums, int k){
        int r = 0 , l = 0 , usedK=0 ;
        long long count = 0;
        while(r<nums.size()){
            if(nums[r] % 2 != 0){
                usedK++;
            }
            while(usedK > k){
                
               if(nums[l] % 2 != 0){
                usedK--;
               }

                l++;
            }
            count += (r - l + 1);
            r++;
            
        }
        return count;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        // int n = nums.size();
       
        //BRUTE FORCE

        // int count = 0;
        // for(int i = 0 ; i<n ;i++ ){
        //     int usedK =0;
        //     for(int j = i ; j<n ; j++){
        //         if(nums[j] % 2 !=0){
        //             usedK++;

        //         }
        //         if(usedK == k){
        //             count += 1;
        //         }
        //     }
        // }

        // return count;

        //OPTIMAL 
        return numberOfSubarraysAtmostK(nums , k) - numberOfSubarraysAtmostK(nums , k-1);

        
    }
};