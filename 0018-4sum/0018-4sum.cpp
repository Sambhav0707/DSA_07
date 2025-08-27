class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        //BRUTE FORCE 

        // set<vector<int>>sett;

        // for(int i = 0 ; i < n ; i++){
        //     for(int j = i+1 ;j<n ; j++){
        //         for(int k = j+1; k < n ; k++){
        //             for(int l = k + 1 ; l< n; l++){
                        // long long sum = nums[i] + nums[j];
                        // sum += nums[k];
                        // sum += nums[l];
        //                 if(sum == target){
        //                     vector<int> temp = {nums[i] , nums[j] ,nums[k] , nums[l]};
        //                     sort(temp.begin() , temp.end());
        //                     sett.insert(temp);

        //                 }
        //             }
        //         }
        //     }
        // }

        //  vector<vector<int>> ans(sett.begin() , sett.end());
        //  return ans;

        //BETTER 
        // set<vector<int>>sett;
        // for(int i = 0 ; i<n ; i++){
        //     for(int j = i + 1 ; j < n ; j++){
        //         set<long long> hashset;
        //         for(int k = j+1 ; k<n ; k++){
        //             long long sum = nums[i] + nums[j];
        //             sum += nums[k]; 
        //             long long l = target - (sum);
        //             auto it = hashset.find(l);
        //             if(it != hashset.end()){
                        // vector<int> temp = {nums[i] , nums[j] ,nums[k] , int(l)};
        //                 sort(temp.begin() , temp.end());
        //                 sett.insert(temp);


        //             }
        //             hashset.insert(nums[k]);
        //         }
        //     }
        // }

        //  vector<vector<int>> ans(sett.begin() , sett.end());
        //  return ans;


        //OPTIMAL 
        sort(nums.begin() , nums.end());
        vector<vector<int>> ans;

        for(int i = 0 ; i< n ; i++){
              if( i>0 && nums[i] == nums[i-1]) continue;
            for(int j = i+1; j<n ; j++){
                int k = j+1;
                int l = n - 1;
                
              
                if(j>i+1 && nums[j] == nums[j-1]) continue;

                while(k<l){

                        long long sum = nums[i] + nums[j];
                        sum += nums[k];
                        sum += nums[l];

                        if(sum > target){
                           
                            l--;

                        }
                      else  if(sum < target){
                        k++;
                      }else{
                         vector<int> temp = {nums[i] , nums[j] ,nums[k] , nums[l]};
                            ans.push_back(temp);
                            k++;
                            l--;
                            while(k<l && nums[k] == nums[k-1]) k++;
                            while(k<l && nums[l] == nums[l+1]) l--;

                      }

                }
            }
        }

        return ans;

        
    }
};