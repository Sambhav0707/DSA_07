class Solution {
public:
    string reverseVowels(string s) {
        string vowel = "aeiou";
        int hash[26] = {};
        for(char c : vowel){
            hash[c - 'a'] = 1;
        }

        string ans = "";
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] == ' ') continue;
            if( isalpha(s[i]) &&hash[tolower(s[i]) - 'a'] == 1){
                ans += s[i];
            }
        }
         reverse(ans.begin() , ans.end());
         int index = 0;
         for(int i = 0 ; i < s.size() ; i++){
            if(s[i] == ' ') continue;
            if(isalpha(s[i]) && hash[tolower(s[i]) - 'a'] == 1){
               s[i] = ans[index];
               index++;
            }
        }

        return s;
        
    }
};