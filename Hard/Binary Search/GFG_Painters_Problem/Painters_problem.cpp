#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
class Solution {
    public:
      bool isPossible(vector<int>& arr, int k , int totalTime){
          int currentTotalTime = 0 ;
          int usedPainters = 1;
          for(int i = 0 ; i<arr.size() ; i++){
              currentTotalTime += arr[i];
              
              if(currentTotalTime > totalTime){
                  currentTotalTime = arr[i];
                  usedPainters++;
                  
              }
          }
          
          if(usedPainters <=  k ){
              return true;
          }
          
          return false;
      }
      int minTime(vector<int>& arr, int k) {
          // code here
          
          
          int start = *max_element(arr.begin() , arr.end());
          int end = accumulate(arr.begin() , arr.end() , 0);
          
          // for(int i = start ; i < end ; i++){
          //     if(isPossible(arr,k,i) == true){
          //         return i ;
          //         break;
          //     }
          // }
          
          int ans = 0;
          
          while(start<=end){
              int mid = (start + end)/2;
              
              if(isPossible(arr,k,mid) == true){
                  ans = mid;
                  end = mid - 1;
              }else{
                  start = mid + 1;
              }
          }
          
          return ans;
          
      }
  };