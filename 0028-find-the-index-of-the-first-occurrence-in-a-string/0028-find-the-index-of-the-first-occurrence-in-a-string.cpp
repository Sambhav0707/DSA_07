class Solution {
public:
    int strStr(string haystack, string needle) {

        for(int i = 0 ; i < haystack.size() ; i++){
            for(int j =i ; j< haystack.size() ; j++){
                string s = haystack.substr(i, j - i +1);

                if(s == needle){
                    return i;
                    break;
                }
            }
        }

        return -1;
        
    }
};