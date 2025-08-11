
import 'dart:math';

class Solution {
  int calTarget(List<int> piles , int hourlyRate){
    int total = 0;
    for(int i = 0 ; i< piles.length ; i++){
        total += (piles[i] / hourlyRate ).ceil();

    }
    return total;
  }  
  int minEatingSpeed(List<int> piles, int hour) {
    int maxx = 0;
    for(int i = 0 ; i< piles.length ; i++){
        maxx = max(maxx, piles[i]);
    }

    int ans = 0;

//    for(int i = 1 ; i < maxx ; i++ ){
//     int target = calTarget(piles , i);

//     if(target <= h){
//      ans = i;
//      break;
//     }
//    }

int l = 1 , h = maxx;

while(l<= h){
    int mid = (l+h) ~/ 2;

    int target = calTarget(piles , mid);

    if(target <= hour){
        ans = mid;
        h = mid - 1;
    }else{
        l = mid + 1;
    }

}

   return ans;
    
  }
}