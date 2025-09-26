class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {

        int l = 0;
        int h = letters.size() - 1;
        int mid;
        char ans = '4';
        

        while(l<=h){
            mid = (l+h)/2;

            if(letters[mid] > target){

                ans = letters[mid];
                h = mid - 1;

            }else{
                l = mid + 1;
            }

        }
        if(ans == '4') return letters[0];
        return ans;
        
    }
};