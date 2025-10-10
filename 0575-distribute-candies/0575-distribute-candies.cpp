class Solution {
public:
    int distributeCandies(vector<int>& candyType) {

        int  n = candyType.size() / 2;

        unordered_map<int,int>mp;

        for(int c : candyType ){
            mp[c]++;
            if(mp.size() > n) return n;
        }

       

        return mp.size();
        
    }
};