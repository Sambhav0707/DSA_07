class Solution {
public:
    string reverseOnlyLetters(string s) {
        
        string ans = "";
        for(int i = 0 ; i < s.size() ; i++){
            if(isalpha(s[i])) ans += s[i];
        }

        reverse(ans.begin() , ans.end());
        int index = 0;
         for(int i = 0 ; i < s.size() ; i++){
            if(isalpha(s[i])){
                s[i] = ans[index];
                index++;
            }
        }

        return s;
    }
};