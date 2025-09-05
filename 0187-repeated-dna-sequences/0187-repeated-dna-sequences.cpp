class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        //edge case :-
        if(s.size() < 10){
            return {};
        }
        //Brute Force
        // vector<string> ans;
        // set<string>sett;
        // for(int i = 0 ; i<s.size() ; i++){
        //     string s1 = s.substr(i,10);
        //     for(int j = i+1 ; j<s.size() ; j++){
        //         string s2 = s.substr(j,10);
        //         if(s1 == s2){
                   
        //           if(sett.count(s1) == false)  ans.push_back(s1);
        //             sett.insert(s1);
        //             break;

        //         }
        //     }
        // }

        // return ans;

        unordered_map<string , int>mp;
        vector<string>ans;
        for(int i = 0 ; i<= (int)s.size() - 10 ; i++){
            string s1 = s.substr(i, 10);
            mp[s1]++;
            

        }

        for(auto it : mp){
            
          if(it.second > 1)  ans.push_back(it.first);
        }

        return ans;

        
    }
};