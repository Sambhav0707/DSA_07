#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    /* we have to write a function to decide wether the current day is possible
    we can do that by iteratiing over the original array and checking the given day is possible 
    for making m bouquets containg k adjacent flowers :- 

    if(arr[i] <= day) => count++ 
  (if not then we will update the number of bouguets)  
  else => no.of.b += count/m; 
          count = 0;
   now if the no.og,b < m then false otherwise true       
    */
    bool posible(vector<int>& array, int m , int k , int day){
        int noOfB = 0;
        int count = 0;
        for(int i = 0 ; i<array.size(); i++){
            if(array[i] <= day){
                count++;
            }else{
                noOfB += count/k;
                count = 0;

            }
        }
        noOfB += count / k; /*we are adding this because suppose the array is [1,1,1,1] 
                              and the m = 2 and k = 1 and day = 1 so it will never 
                              execute the else block*/

        if(noOfB < m){
            return false;
        }

        return true;

    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        // the loop for getting min and max
        int maxx = INT_MIN , minn = INT_MAX;
        for(int i  = 0;i < bloomDay.size() ; i++){
            maxx = max(bloomDay[i] , maxx);
            minn = min(bloomDay[i] , minn);
        }

        // the brute force approach


        // for(int i = minn ; i <= maxx ; i++){

        //     if(posible(bloomDay , m , k , i) == true){
        //         return i;
        //     }
        
        
        // }


        // the optimal approach using BS
        if ((long long)m * k > bloomDay.size()) return -1;
        
        
        int l = minn;
        int h = maxx;
        int ans;

        while(l <= h){
            int mid = (l+h)/2;

            if(posible(bloomDay , m , k , mid) == true ){
              ans = mid;
              h = mid -1;
            }else{
                l = mid + 1;
            }
        }
     
        return ans;

      


        
        
    }
};