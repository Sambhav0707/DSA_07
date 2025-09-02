class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int low = 0;
        int high = numbers.size() - 1;
        while(low<=high){
            int mid = (low+high)/2;

            int ans = numbers[low] + numbers[high];
            if(ans == target){
                return {low+1, high+1};
                break;

            }
            if(ans > target){
                high--;
            }else{
                low++;
            }


        }

        return {-1,-1};
        
    }
};