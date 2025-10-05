/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int peak(MountainArray &m){
        int l = 0;
        int r = m.length() -1;

        while(l < r){
        int mid = l + (r - l) / 2;        
        if(m.get(mid) > m.get(mid + 1)){
               r = mid;
        }else{
            l = mid + 1;
        }

       
    } 

     return l;
    }
    int findInMountainArray(int target, MountainArray &m) {
        int p = peak(m);
        int ans = -1;
        int l = 0;
        int r = p;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            int val = m.get(mid);
    
            if (val == target) {
        // Found a match! Store it and look for an even earlier one to the left.
                    ans = mid;
                    r = mid - 1; 
                } else if (val < target) {
                         l = mid + 1;
                            } else {
                  r = mid - 1;
                }
        }

        if (ans != -1) return ans; // If we found it on the left, we're done!

            l = p + 1;
            r = m.length() - 1;
            while (l <= r) {
    int mid = l + (r - l) / 2;
    int val = m.get(mid);
    
    if (val == target) {
        // Found the first match on the right side. Since we search left first,
        // this is the only one we need.
        return mid;
    } else if (val > target) { // Logic is flipped!
        // If the mid value is too high, move right (towards smaller values)
        l = mid + 1;
    } else {
        // If the mid value is too low, move left (towards larger values)
        r = mid - 1;
             }
            }


            return ans;


        
    } 
};