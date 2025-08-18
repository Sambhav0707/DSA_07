class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // int maxL = 0;
        // int cL = 0;
     
        // for(int i = 0 ; i<s.size() ; i++){
        //      int hash[255] = {0};

        //      for(int j = i ;j<s.size() ; j++){
        //         if(hash[s[j]] == 1){
        //             break;
        //         }
        //         cL = j-i+1;
        //         maxL = max(maxL , cL);
        //         hash[s[j]] = 1;
        //      }
        // }

        // return maxL;

      int hash[256];
      fill(hash, hash + 256, -1);


       int r = 0 , l = 0;
       int len = 0;
       int maxL = 0;

       while(r < s.size()){
        if(hash[s[r]] != -1){
            if(hash[s[r]] >= l){
                l = hash[s[r]] + 1;
            }
        }
        len = r - l +1;
        maxL = max(len , maxL);

        hash[s[r]] = r;
        r++;

       }

       return maxL;


      

       

       
        
    }
};