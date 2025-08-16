#include <vector>
#include <algorithm>
using namespace std;

class Solution {
    public:
      /*
      we have to make a function that tells us that the 
      given distance can we valid to place the all cows or not 
      in that we will loop through the original array 
      and we will place like cows used already = 1 
      then we will make the last cow = arr[0] 
      now we will check if the arr[i] = last cow >= dist
      then we will increase the used cow and make that 
      index as last cow 
      */
      bool isPossible(vector<int> &stalls, int k , int dist){
          int lastCow = stalls[0];
          int cowsUsed = 1;
          
          for(int i = 1 ; i < stalls.size() ; i++){
              if(stalls[i] - lastCow >= dist){
                  cowsUsed++;
                  lastCow = stalls[i];
              }
          }
          
          if(cowsUsed >= k){
              return true;
          }
          return false;
      }
      int aggressiveCows(vector<int> &stalls, int k) {
          // code here
          /* 
          first we have to sort the array 
          */
          
          sort(stalls.begin() , stalls.end());
          
          /*
          then we have to find the max and min
          */
          int min = stalls[0];
          int max = stalls[stalls.size() - 1];
          
          int first  = 1;
          int last = max - min;
          
          int ans = 0;
          
          /*
          then we will run a loop thorugh this range 
          */
          
          // for(int i = 1 ; i<=last ; i++){
          //     if(isPossible(stalls , k , i) == true){
          //         continue;
          //     }else{
          //         ans = i - 1;
          //         break;
                  
          //     }
          // }
          
          // optimal solution 
          while(first <= last){
              int mid = (first + last)/2;
              if(isPossible(stalls , k , mid) == true){
                  ans = mid;
                  first = mid + 1;
                  
              }else{
                  last = mid -1;
              }
          }
          
          return ans;
      }
  };