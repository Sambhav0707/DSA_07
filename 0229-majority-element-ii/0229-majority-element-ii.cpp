class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
       // insert in map 
       // check for freq 
       // check that the element is present in set or not 
       unordered_map<int , int>mpp;
       unordered_set<int>sett;
       vector<int>ans;
       int target = nums.size()/3;

       for(int i = 0 ; i <nums.size() ; i++){
        mpp[nums[i]]++;

        auto it = mpp.find(nums[i]);


        if(it->second > target){
            auto it2 = sett.find(nums[i]);

            if(it2 == sett.end()){
                sett.insert(nums[i]);
                ans.push_back(nums[i]);
            }
            


        }

       }

       return ans;
   


       
        
    }
};