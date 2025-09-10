class Solution {
public:
    int getMin(int freq[26]){
     int minn = INT_MAX;
     for(int i  = 0 ; i<26 ; i++){
      if(freq[i] != 0)   minn = min(minn , freq[i]); 
     }

     return minn;
    }
    int getMax(int freq[26]){
     int maxx = INT_MIN;
     for(int i  = 0 ; i<26 ; i++){
        if(freq[i] != 0)   maxx = max(maxx , freq[i]); 
     }

     return maxx;
    }
    int beautySum(string s) {
        int ans = 0;
     for(int i  = 0 ; i< s.size() ; i++){
        int freq[26] = {0};
           
        for(int j = i ; j < s.size() ; j++){
            freq[s[j] - 'a']++;
            int maxF = getMax(freq);
            int minF = getMin(freq);
          
          int  beauty = maxF - minF;
            ans += beauty;


        }
     }

     return ans;
        
    }
};