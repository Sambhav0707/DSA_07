class Solution {
public:
    int strStr(string haystack, string needle) {
        //BRUTE FORCE

        // for(int i = 0 ; i < haystack.size() ; i++){
        //     for(int j =i ; j< haystack.size() ; j++){
        //         string s = haystack.substr(i, j - i +1);

        //         if(s == needle){
        //             return i;
        //             break;
        //         }
        //     }
        // }

        // return -1;

        for(int i = 0 ; i < haystack.size() ; i++ ){
            if(haystack[i] == needle[0]){
                string s = haystack.substr(i , needle.size());
                if(s == needle){
                    return i;
                    break;
                }
            }
        }
        return -1;
    }
};