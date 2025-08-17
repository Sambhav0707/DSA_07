class Solution {
public:
    bool judgeSquareSum(int c) {
       long long l = 0 ;
       long long h = floor(sqrt(c));

       while(l<=h){
        long long sum =( l*l) + (h*h );

        if(sum == c){
            return true;
            break;
        }else if(sum > c){
            h--;
        }else{
            l++;
        }
       }

        return false;
        
    }
};