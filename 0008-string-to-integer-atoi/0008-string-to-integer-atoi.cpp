class Solution {
public:
    int myAtoi(string s) {
        int sign = 1;
        int i = 0;
        int n = s.size();
        long res = 0;

        //trim the white spaces
        while(i<n && s[i] == ' ') i++;

        //check that is the whole given string is empty or not
        if(i == n) return 0;

        //check for sign
        if(s[i] == '-'){
            sign = -1;
            i++;
        }else if(s[i] == '+'){
            i++;
        }

        //count the digits till the non digit (for checking digit in c++ there is isDigit funtion)
        while(i<n && isdigit(s[i])){
            res = res*10 + (s[i] - '0');

            //checking that if there is overflow or not
            if((sign * res) > INT_MAX) return INT_MAX;
            if((sign * res) < INT_MIN) return INT_MIN;

            i++;
        }


        return (int)(sign * res);


    
    }
};