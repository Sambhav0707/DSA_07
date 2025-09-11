class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>st;
        string s2 = "";
        for(int i = 0 ; i< s.size() ; i++){
            if(s[i] == '('){
                st.push(s[i]);
            } 
            if(s[i] == ')'){
               if(!st.empty()){ st.pop();
                s2 = s2 + "()";}
            }

        }

        return s.size() - s2.size();
        
    }
};