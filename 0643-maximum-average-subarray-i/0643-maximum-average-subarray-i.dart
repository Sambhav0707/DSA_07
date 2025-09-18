class Solution {
  double findMaxAverage(List<int> nums, int k) {
   int currentSum = 0;
   int maxSum = 0;

   for(int i = 0 ;i<k ; i++){
    currentSum += nums[i];
   }

   maxSum = currentSum;

   for(int i = k ; i < nums.length ; i++){
    currentSum = currentSum - nums[i-k];
    currentSum = currentSum + nums[i];
    maxSum = max(maxSum , currentSum);
   }


   return maxSum/k;
    
    
    
  }
}