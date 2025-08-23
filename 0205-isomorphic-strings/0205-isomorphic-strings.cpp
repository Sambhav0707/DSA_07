class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }
        for(int i = 0 ; i < t.size() ; i++){
         s += t[i];             
        }
        int l = 0 ;
        int r = t.size();
        unordered_map<char ,char>mpp;
        unordered_set<char> used;
        while(l < t.size() && r < s.size()){
            auto it = mpp.find(s[l]);
          

            if(it != mpp.end() ){
                if(it->second == s[r] ){
                l++;
                r++;

                }else{
                    return false;
                    break;
                }

            }else{

                if(used.count(s[r])) return false;
                mpp[s[l]] = s[r];
                used.insert(s[r]);
                l++;
                r++;
            }


        }


        return true;

     

        
        

    }
};