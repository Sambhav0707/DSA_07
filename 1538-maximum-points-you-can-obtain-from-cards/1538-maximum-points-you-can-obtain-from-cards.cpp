class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        /*
        so the intuition is pick first k element from the left then 
        dreacse them by one place till left == 0;

        */

        int left = 0 , right = 0 , sum = 0;

        for(int i = 0; i< k ; i++){
            left += cardPoints[i];
        }

        sum = left;

        int LP = k - 1;
        int RP = cardPoints.size() - 1;

        while(left != 0){
            left -= cardPoints[LP];
            LP--;
            right += cardPoints[RP];
            RP--;
            sum = max(sum, (left+right));
        }

        return sum;
        
    }
};