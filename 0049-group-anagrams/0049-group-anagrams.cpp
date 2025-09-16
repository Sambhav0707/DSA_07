class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

       // by sorted string  , list of strings 

       unordered_map<string , vector<string>>ans;

       for(int i = 0; i <strs.size() ; i++){
        string s = strs[i];
        sort(s.begin() , s.end());
        if(ans.find(s) != ans.end()){
            auto it = ans.find(s);
            it->second.push_back(strs[i]);

        }else{
            vector<string>strings;
            strings.push_back(strs[i]);
            ans[s] = strings;
        }
       }

       vector<vector<string>>answer;

       for(auto it : ans){
        answer.push_back(it.second);

       }

       return answer;







        
        
    }
};