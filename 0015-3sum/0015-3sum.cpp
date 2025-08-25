class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
    //BRUTE FORCE    
    //   set<vector<int>> st;
    //   int n  = arr.size();
    // // check all possible triplets:
    // for (int i = 0; i < n; i++) {
    //     for (int j = i + 1; j < n; j++) {
    //         for (int k = j + 1; k < n; k++) {
    //             if (arr[i] + arr[j] + arr[k] == 0) {
    //                 vector<int> temp = {arr[i], arr[j], arr[k]};
    //                 sort(temp.begin(), temp.end());
    //                 st.insert(temp);
    //             }
    //         }
    //     }
    // }

    // //store the set elements in the answer:
    // vector<vector<int>> ans(st.begin(), st.end());
    // return ans;


    //BETTER
     
    //  set<vector<int>>st;
    // for(int i = 0 ; i < arr.size() ; i++){
    //     unordered_map<int,int>mpp;
    //     for(int  j = i+1 ; j<arr.size() ; j++){
    //         int k = -(arr[i] + arr[j]);
    //         auto it = mpp.find(k);

    //         if(it != mpp.end()){
    //             vector<int>temp = {arr[i], arr[j] ,k};
    //              sort(temp.begin(), temp.end());
    //              st.insert(temp);


    //         }else{
    //             mpp[arr[j]]++;
    //         }
    //     }
    // }

    // vector<vector<int>> ans(st.begin(), st.end());
    // return ans;

    //OPTIMAL

    sort(arr.begin() , arr.end());
    vector<vector<int>> ans;
    for(int i  = 0 ; i<arr.size() ; i++){
        int j = i + 1 ;
        int k = arr.size() - 1;

        if(i>0 && arr[i] == arr[i-1]) continue;

        while(j<k){
          int sum = arr[i] + arr[j] + arr[k];

          if(sum < 0){
            j++;
          }
         else if(sum > 0){
            k--;
          }

          else{
            vector<int>temp = {arr[i],arr[j],arr[k]};
            ans.push_back(temp);
            j++;
            k--;
            while(j < k && arr[j] == arr[j - 1]) j++;
            while(j < k && arr[k] == arr[k + 1]) k--;
          


          }


        }
    }
       return ans;
        
    }
};