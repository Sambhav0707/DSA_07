class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        int use = 1;
        int count = 0;
        vector<int>stackA;
        vector<string>ans;

        stackA.push_back(use);
        // ans.push_back("Push");

        while(count < target.size() && use <= n){
           
            if(stackA[stackA.size() - 1] == target[count]){
                count++;
                use++;
                ans.push_back("Push");
            }else{
                ans.push_back("Push");
                stackA.erase( stackA.begin() + stackA.size() - 1);
                use++;
                ans.push_back("Pop");

            }
           stackA.push_back(use);
        //    ans.push_back("Push");

        }


        return ans;
        
    }
};