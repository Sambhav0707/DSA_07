/*Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

You must solve this problem without using the library's sort function.

 

Example 1:

Input: nums = [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]
Example 2:

Input: nums = [2,0,1]
Output: [0,1,2]
 

Constraints:

n == nums.length
1 <= n <= 300
nums[i] is either 0, 1, or 2.*/

///Brute
/** i WAS able to do it in brute force approach by selection sort :- TC:- O(n^2) SC:- O(1) */

// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         for(int i = 0 ; i < nums.size() -1 ; i++){
//             for(int j = i+1 ; j < nums.size()  ; j++ ){
//                 if(nums[j] < nums[i] ){
//                     swap(nums[i] , nums[j]);
                    

//                 }
//             }
//         }
        
//     }
// };

///Best
/** then i tried using counting the 0 , 1  ,2 and overriding them (this was suggested in the yt video ) :- TC:- O(2n) SC:- O(1) */

// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         // for(int i = 0 ; i < nums.size() -1 ; i++){
//         //     for(int j = i+1 ; j < nums.size()  ; j++ ){
//         //         if(nums[j] < nums[i] ){
//         //             swap(nums[i] , nums[j]);
                    

//         //         }
//         //     }
//         // }

//         //for best approach
//         int count0 = 0 , count1 = 0 , count2 = 0;

//         for (int i = 0 ; i< nums.size() ; i++){
//             if(nums[i] == 0){
//                 count0++;
//             } else if (nums[i] == 1){
//                 count1++;

//             }else{
//                 count2++;
//             }


//         }

//         for(int i = 0 ; i< count0 ; i++){
//             nums[i] = 0;

//         }
//         for(int i = count0 ; i<( count0 + count1)  ; i++){
//             nums[i] = 1;

//         }
//         for (int i = ( count0 + count1) ; i < nums.size() ; i++  ){
//             nums[i] = 2;
//         }
        
//     }
// };

/** then i did it with Dutch Flag ALgo : TC :- O(n) SC:- O(1) */

/** i encounter the problem where i was using for loop  */
// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         // for(int i = 0 ; i < nums.size() -1 ; i++){
//         //     for(int j = i+1 ; j < nums.size()  ; j++ ){
//         //         if(nums[j] < nums[i] ){
//         //             swap(nums[i] , nums[j]);
                    

//         //         }
//         //     }
//         // }

//         //for best approach
//         // int count0 = 0 , count1 = 0 , count2 = 0;

//         // for (int i = 0 ; i< nums.size() ; i++){
//         //     if(nums[i] == 0){
//         //         count0++;
//         //     } else if (nums[i] == 1){
//         //         count1++;

//         //     }else{
//         //         count2++;
//         //     }


//         // }

//         // for(int i = 0 ; i< count0 ; i++){
//         //     nums[i] = 0;

//         // }
//         // for(int i = count0 ; i<( count0 + count1)  ; i++){
//         //     nums[i] = 1;

//         // }
//         // for (int i = ( count0 + count1) ; i < nums.size() ; i++  ){
//         //     nums[i] = 2;
//         // }

//         //Optimal Approach
//         int low = 0 , mid = 0, high = nums.size() -1;
//         for(int i = mid ; i< high ; i++){
//             if (nums[mid] == 0){
//                 swap(nums[low] , nums[mid]);
//                 low++;
//                 mid++;
//             }else if(nums[mid] == 1){
//                 // swap(nums[mid]  , nums[mid-1]);
//                 mid++;
                
//             }else{
//                 swap(nums[mid] , nums[high]);
//                 high--;


//             }
//         }
 
        
//     }
// };


/** then i solved it using while loop */
 #include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        // for(int i = 0 ; i < nums.size() -1 ; i++){
        //     for(int j = i+1 ; j < nums.size()  ; j++ ){
        //         if(nums[j] < nums[i] ){
        //             swap(nums[i] , nums[j]);
                    

        //         }
        //     }
        // }

        //for best approach
        // int count0 = 0 , count1 = 0 , count2 = 0;

        // for (int i = 0 ; i< nums.size() ; i++){
        //     if(nums[i] == 0){
        //         count0++;
        //     } else if (nums[i] == 1){
        //         count1++;

        //     }else{
        //         count2++;
        //     }


        // }

        // for(int i = 0 ; i< count0 ; i++){
        //     nums[i] = 0;

        // }
        // for(int i = count0 ; i<( count0 + count1)  ; i++){
        //     nums[i] = 1;

        // }
        // for (int i = ( count0 + count1) ; i < nums.size() ; i++  ){
        //     nums[i] = 2;
        // }

        //Optimal Approach
        int low = 0 , mid = 0, high = nums.size() -1;
        while(mid<=high){
            if (nums[mid] == 0){
                swap(nums[low] , nums[mid]);
                low++;
                mid++;
            }else if(nums[mid] == 1){
                // swap(nums[mid]  , nums[mid-1]);
                mid++;
                
            }else{
                swap(nums[mid] , nums[high]);
                high--;


            }
        }
 
        
    }
};