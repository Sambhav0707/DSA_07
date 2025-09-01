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
        
        //BETTER

        // for(int i = 0 ; i < haystack.size() ; i++ ){
        //     if(haystack[i] == needle[0]){
        //         string s = haystack.substr(i , needle.size());
        //         if(s == needle){
        //             return i;
        //             break;
        //         }
        //     }
        // }
        // return -1;

        //OPTIMAL
        int l = 0 , r = 0;
        while(l< haystack.size() && r < needle.size() ){
            int start = l;
            while(l< haystack.size() && r < needle.size() && haystack[l] == needle[r]){
                l++;
                r++;

            }

            if(r== needle.size()){
                return start;
                break;
            }

            l = start +1;
            r= 0;
        }

        return -1;
    }
};