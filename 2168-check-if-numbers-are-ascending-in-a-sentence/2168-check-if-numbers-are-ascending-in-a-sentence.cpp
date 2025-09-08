class Solution {
public:
    bool areNumbersAscending(string s) {
     int prev = 0;
      int i = 0;
       while(i<s.size()){
         string a ;
            while(isdigit(s[i])){
               a += s[i];
                i++;
            }
           if(a != ""){ 
            if(stoi(a) < prev || stoi(a) == prev ) return false;
            prev = stoi(a);
            
            }

            
             i++;
       }

        return true;
        
    }
};