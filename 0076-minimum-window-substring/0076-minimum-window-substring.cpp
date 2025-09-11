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
      int minLen = INT_MAX;
      int index = -1;
      int count = 0;
      int hash[256] = {0};
      for(char c :t) hash[c]++;

      while(r<s.size()){
        if(hash[s[r]] > 0) count++;
        hash[s[r]]--;

        while(count == t.size()){
            if(r-l+1 < minLen){
                index = l;
                minLen = r-l+1;
            }
            hash[s[l]]++;
            if(hash[s[l]] > 0) count--;

            l++;
        }
        r++;

      }

      return index == -1 ? "" : s.substr(index , minLen);




          

        }
    
};