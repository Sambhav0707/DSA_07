class Solution {
public:
    /*first we make a funciton that test the diviser after dividing with all 
    the elements of the nums and summing them is > or < threshold so 
    according to that it will give true or false
    */
    bool isDivisible(vector<int>& nums , int d , int threshold){
        int sum = 0;
        for(int i = 0 ; i< nums.size() ; i++){
           sum += ceil((double)nums[i] / d);

        }
        if(sum > threshold ){
            return false;
        }
        return true;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int ans = 0;
        int large = INT_MIN;

        for(int i = 0 ; i < nums.size() ; i++){
            large = max(large , nums[i]);
        }

        // brute force approach
        // for(int i = 1 ; i <= large ; i++){
        //     if(isDivisible(nums , i ,threshold ) == true){
        //         ans = i;
        //         break;
        //     }
        // }
        //  return ans;

        // optimal approach by BS
        int answer = INT_MAX;
        int l  = 1;
        int h = large;

        while( l <= h){
            int mid = (l+h)/2;

            if( isDivisible(nums , mid ,threshold ) == true){
                answer = min(answer, mid);
                h = mid - 1;
            }else{
                l = mid +1;
            }
        }

        return answer;

       
        
    }
};