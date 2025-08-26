class Solution {
public:
    int maxDepth(string s) {
         int maxD = INT_MIN;
        int currentCount = 0;
        for(int i = 0 ; i < s.size() ; i++){
           
           
            if(s[i] == '('){
                currentCount++;
                maxD = max(maxD, currentCount);
            }

            if(s[i] == ')'){
                currentCount--;
            }
        }
         if(maxD == INT_MIN){
            return 0;
         }
        return maxD;
        
    }
};