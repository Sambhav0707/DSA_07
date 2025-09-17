class Solution {
  public:
  vector<int> topKFrequent(vector<int>& nums, int k) {
    vector<pair<int,int>>p;
    unordered_map<int,int>mp;
    vector<int>ans;


    for(auto it : nums){
        mp[it]++;
    }

    for(auto it : mp){
        p.push_back({it.first , it.second});
    }

        sort(p.begin(), p.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            return a.second > b.second; // Sort by frequency (descending)
        });


    for(int i = 0; i < k ; i++){
       ans.push_back(p[i].first);
    }

   return  ans;
    
    
  }
};