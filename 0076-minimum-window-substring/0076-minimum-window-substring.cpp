class Solution {
public:
    string minWindow(string s, string t) {
      
    //   int minL = INT_MAX;
    //   unordered_map<char , int>mp;

    //   for(int i  = 0 ; i<t.size() ; i++){
    //     mp[t[i]]++;
    //   }
    //   string ans = "";
    //   for(int i = 0; i<s.size() ; i++){
    //     unordered_map<char , int> mp2;
    //     mp2 = mp;
    //     for(int j = i ; j <s.size() ; j++){
    //         if(mp2.find(s[j]) != mp2.end()){
    //             mp2[s[j]]--;

    //             if(mp2[s[j]] == 0) mp2.erase(s[j]);
    //         }

    //         if(mp2.size() == 0){

    //            if(j-i+1 < minL){ 
    //            ans = s.substr(i , j-i+1);
    //            minL = j-i+1;}
    //             break;
    //         }
    //     }
    //   }
            
    //     return ans;   


        int r = 0 , l = 0;
        unordered_map<char , int>mp;
      
    for(int i  = 0 ; i<t.size() ; i++){
        mp[t[i]]++;
      }

        int need = 0;
        int have = 0;
        need = mp.size();
        string ans = "";
        int minL = INT_MAX;
        // unordered_map<char , int>mp2;
        // mp2 = mp;
        int res_l = 0;
int res_len = INT_MAX;


        while(r<s.size()){
            if(mp.find(s[r]) != mp.end()){
                mp[s[r]]--;
                if(mp[s[r]] == 0){
                    have++;
                }
            }
           
            while(have==need){
           if (r - l + 1 < res_len) {
    res_l = l;
    res_len = r - l + 1;
}
                if(mp.find(s[l]) != mp.end()){
                    mp[s[l]]++;
                 
                    if(mp[s[l]] == 1)    have--;
                 
                }
                l++;

            }
            r++;
        }

     return res_len == INT_MAX ? "" : s.substr(res_l, res_len);




          

        }
    
};