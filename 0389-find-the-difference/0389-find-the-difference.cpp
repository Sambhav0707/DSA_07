class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int>mp;
        for(char c : s){
            mp[c]++;
        }

        for(char c : t){
            if(mp.find(c) == mp.end()){
                return c;
            }else{
                mp[c]--;
                if(mp[c] == 0) mp.erase(c);
            }
        }

        return ' ';
    }
};