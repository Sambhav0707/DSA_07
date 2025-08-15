class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
   
   int maxx = INT_MIN;
   int n =  nums.size();
  
//    for(int i  = 0 ; i < n ; i++ ){
//        int curr = 0;
//     for(int j = i ; j < n ; j++){

       
//         curr += nums[j];
//          maxx = max(maxx , curr);
//     }
    
//    }
// int curr = 0;
// for(int i  = 0 ; i < n ; i++){
//   if(curr + nums[i] > nums[i]){
//     curr += nums[i];
//   }else{
//     curr = nums[i];
//   }

//   maxx = max(curr , maxx);
// }

int curr = 0;
for(int i = 0 ; i < n; i++){
    if(curr < 0){
        curr = 0;
    }
    curr += nums[i];
    maxx = max(curr , maxx);
}
    return maxx;
        
    }
};