#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    /*
    we have to make a function that checks 
    the given capacity can be used to shipp
    all the items in the given days or not 
    */
    bool isPossible(vector<int>& weights, int days , int cap){
        int daysUsed = 1; // start with the first day 
        int sum = 0 ; // this checks the the current load on ship

        for(int i = 0 ; i< weights.size() ; i++){
            if(weights[i] > cap){
                return false; // because it is imposible to ship all the shipments if the capacity is lower
            }

            if(sum + weights[i] > cap){ // checkin the current element can be load into the ship or not 
                daysUsed++;
                sum = 0;
            }

            sum += weights[i]; 

            if(daysUsed > days) {
                return false;
            }
        }

        return true;
    }
    int shipWithinDays(vector<int>& weights, int days) {
       int large = *max_element(weights.begin(), weights.end()); // starting point 

        int upto = 0; // ending point is that where everything can be shiped in one day

        for(int i = 0 ; i< weights.size() ; i++){
            upto += weights[i];
        }

        // brute force approach

        int ans = 0;

        // for(int i = large ; i <= upto ; i++){
        //     if(isPossible(weights , days , i) == true){
        //         ans = i;
        //         break;

        //     }
        // }

        // return ans;

     // optimal approach using BS
     while(large <= upto){
        int mid = (large + upto)/2;
        if(isPossible(weights , days , mid) == true){
             ans = mid;
             upto = mid - 1;


        }else{
            large = mid+1;
        }
     }

     return ans;

       
        
    }
};