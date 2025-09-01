class Solution {
public:
    int mySqrt(int x) {
        if(x == 0){
            return 0;
        }
        if(x == 1){
            return 1;
        }

        for(long long i = 1 ; i<=x ; i++){
            if(i*i == x){
                return i;
                break;
            }
            if(i*i > x){
                return i - 1;
                break;
            }
        }
        
        return -1;
    }
};