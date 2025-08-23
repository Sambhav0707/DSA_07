class Solution {
public:
    /*
    so the intuition is first we combine the two strings.
    then we maintian an map and a set .
    so the right pointer would start from the combined string s
    and the left pointer would start fron the t.size() th position in the combined string s
    now we check that s[l] key is present in the map ?
      if it is present then we simply check that its value should we == to s[r]
        if it is then => r++ , l++;
        if it is not => false;
      if it is not present then 
        we check that the s[r] is used by checking that the s[r] is present in the set or not 
        if it is => false;
        if it is not then just add the s[l] => s[r] and in the set => insert s[r] ans l++ , r++;           
    */
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