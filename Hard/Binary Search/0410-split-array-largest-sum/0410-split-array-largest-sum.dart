import 'dart:math';

class Solution {
  /*
  first we need to find the range 
  so the intuition is the worst case that the k = 1;
  so the subarray with the largest minimun sum would be the 
  the largest element in the nums;
  and the subarray with the largest sum and the largest sum among the list of 
  the subarrays containing the largest sum would be the sum of all nums[i]
  now we have the range so we need to write the logic if the given range is possible to 
  divide the nums in k parts:-
  so what we did was
  => we took a used k = 1 
  => then we loo through the original array :- 
      first we put the current sum += nums[i];
      then we checked that the current sum is within the range (given)
      if it is then we do nothing 
      if it is not then we increase the used k by 1
  => then at the last of the loop we check that :- 
      the used k <= k then we return true:
      if it not then we return false;
   */  
  bool isPossible(List<int> nums, int k , int range){
    int currentSum = 0 ;
    int maxSum = 0;
    int currentK = 1;

    for(int i = 0 ; i < nums.length ; i++){
        currentSum += nums[i];

        if(currentSum <= range){
            maxSum = max( maxSum , currentSum);
        }else{
            currentK++;
            currentSum = nums[i];
        }
    }

    if(currentK <= k){
        return true;
    }

    return false;
  }  
  int splitArray(List<int> nums, int k) {
    int start = nums.reduce(max);
    int end = nums.fold(0, (a, b) => a + b);
    // brute force 

    // for(int i = start ; i<=end ; i++){
    //     if(isPossible(nums , k , i) == true){
    //         return i;
    //         break;
    //     }
    // }

    //optimal
    int ans = 0;
    while(start <= end){
        int mid = (start + end)~/2;
        if(isPossible(nums , k , mid) == true){
          ans = mid;
          end = mid - 1;
        }else{
            start = mid + 1;
        }
    }

    return ans;
    
  }
}