class Solution {
public:
    bool isValid(string s) {
         stack<char>st;
         if(s.size() == 1){
            if(s[0] == '}' || s[0] == ')' || s[0] == ']') return false;
         }
        for(int i = 0; i<s.size() ; i++){
            if(s[i] == '('){
                st.push(s[i]);  
            }
            if(s[i] == '['){
                st.push(s[i]);  
            }
             if(s[i] == '{'){
                st.push(s[i]);  
            }
            if(s[i] == ')'){
                  if(st.empty()) return false;
                if(st.top() != '('){
                    return false;
                    break;
                }
                st.pop();
            }
            if(s[i] == ']'){
                if(st.empty()) return false;
                if(st.top() != '['){
                    return false;
                    break;
                }
                st.pop();
            }
            if(s[i] == '}'){
                  if(st.empty()) return false;
                if(st.top() != '{'){
                    return false;
                    break;
                }
                st.pop();
            }
        }
        return st.empty();
        
    }
};