/* 27. Remove Element
Solved
Easy
Topics
premium lock icon
Companies
Hint
Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The order of the elements may be changed. Then return the number of elements in nums which are not equal to val.

Consider the number of elements in nums which are not equal to val be k, to get accepted, you need to do the following things:

Change the array nums such that the first k elements of nums contain the elements which are not equal to val. The remaining elements of nums are not important as well as the size of nums.
Return k.
Custom Judge:

The judge will test your solution with the following code:

int[] nums = [...]; // Input array
int val = ...; // Value to remove
int[] expectedNums = [...]; // The expected answer with correct length.
                            // It is sorted with no values equaling val.

int k = removeElement(nums, val); // Calls your implementation

assert k == expectedNums.length;
sort(nums, 0, k); // Sort the first k elements of nums
for (int i = 0; i < actualLength; i++) {
    assert nums[i] == expectedNums[i];
}
If all assertions pass, then your solution will be accepted.

 

Example 1:

Input: nums = [3,2,2,3], val = 3
Output: 2, nums = [2,2,_,_]
Explanation: Your function should return k = 2, with the first two elements of nums being 2.
It does not matter what you leave beyond the returned k (hence they are underscores).
Example 2:

Input: nums = [0,1,2,2,3,0,4,2], val = 2
Output: 5, nums = [0,1,4,0,3,_,_,_]
Explanation: Your function should return k = 5, with the first five elements of nums containing 0, 0, 1, 3, and 4.
Note that the five elements can be returned in any order.
It does not matter what you leave beyond the returned k (hence they are underscores).
 

Constraints:

0 <= nums.length <= 100
0 <= nums[i] <= 50
0 <= val <= 100 */

/** I was able to give the brute force solution by myself with TC :- O(n^2) :-*/

// class Solution {
// public:
//     int removeElement(vector<int>& nums, int val) {
//         int count = 0;

//         int size =  nums.size();
//         for (int i = 0 ; i < size  ;){
//             if(nums[i] != val){
//                 i++; 
//                 count++;
//             }else{
//                 nums.erase( nums.begin() + i );
//                 size = nums.size();
                

              

//             }
//         }
//         return count;

    

    
    
        
//     }
// };

/** I was wrong initialy :-  */

// You're encountering incorrect output because of how you're updating i after erasing an element from the vector.

// Let’s look at this part:

// cpp
// Copy
// Edit
// if (nums[i] != val) {
//     i++; 
//     count++;
// } else {
//     nums.erase(nums.begin() + i); // removes nums[i]
//     size = nums.size();           // updates size
//     i++;                          // moves to next index
// }
// Problem:
// After erase(nums.begin() + i), all elements to the right of i shift one place to the left. If you increment i immediately after that, you're skipping the element that moved into position i.

// Example with your input:
// Input: [0,1,2,2,3,0,4,2], val = 2

// At i = 2, nums[i] == 2, so you erase it → [0,1,2,3,0,4,2]

// Now nums[2] == 2 again, but i++ skips it

// The next check happens at i = 3, which is 3, and the second 2 at index 2 (after shift) is missed

// Summary:
// You're skipping elements right after an erase because you're doing i++, but erase() already shifted the next element into position i.

// If you're erasing, you should not increment i, because the current index now points to the next new element after the shift.




 /** then i found the optimal solution using two pointers as TC:- O(n) with help of gpt :- */
 #include <vector>
#include <algorithm>
using namespace std;

 class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // int count = 0;

        // int size =  nums.size();
        // for (int i = 0 ; i < size  ;){
        //     if(nums[i] != val){
        //         i++; 
        //         count++;
        //     }else{
        //         nums.erase( nums.begin() + i );
        //         size = nums.size();
                

              

        //     }
        // }
        // return count;

        int writeIndex = 0;  // Points to the next position to write a non-val element

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[writeIndex] = nums[i];  // Overwrite the current writeIndex with valid value
                writeIndex++;               // Move writeIndex forward
            }
        }

        return writeIndex;

    

    
    
        
    }
}; 