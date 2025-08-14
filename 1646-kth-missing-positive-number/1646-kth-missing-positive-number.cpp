class Solution {
public:
    int findKthPositive(vector<int>& nums, int k) {
       // brute force 
    //    for(int i = 0 ; i < nums.size() ; i++){
    //     if(nums[i] <= k){
    //         k++;
    //     }else{
    //         break;
    //     }
    //    }

    //    return k;


    // optimal 
    int l = 0 , h = nums.size() - 1 ;
    while(l<=h){
        int mid = (l+h)/2;
        int missing = nums[mid] - (mid + 1);
        if(missing < k ){
          
             l = mid + 1;
        }else{
              h = mid - 1;
           
        }

    }
    return k + h + 1;
        
    }
};