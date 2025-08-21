class Solution {
public:
    string frequencySort(string s) {


        unordered_map<char, int>mpp;
        for(int i = 0 ; i < s.size() ; i++){
            mpp[s[i]]++;
           
        }
         vector<pair<char , int>>ans;
        for( auto it : mpp ){
           ans.push_back({it.first , it.second});
        }

        sort(ans.begin() , ans.end(), [](const pair<char,int> &a, const pair<char,int> &b){
            if (a.second == b.second) 
                return a.first < b.first; // if tie, sort by name
            return a.second > b.second;
        });
        string res = "";
        for(int i = 0 ; i < ans.size() ; i++){
           res += string(ans[i].second, ans[i].first); ;
        }



        return res;
        
        
    }
};