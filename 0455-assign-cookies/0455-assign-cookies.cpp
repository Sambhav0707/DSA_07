class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin() , g.end());
        sort(s.begin() , s.end());

        int l = 0;
        int r = 0;
        if(s.size() == 0) return 0;
        while(l<s.size() && r <g.size()){
            if(g[r] <= s[l]){
                r += 1;
            }

            l+=1;
        }

        return r;



    }
};