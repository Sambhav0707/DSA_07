class Solution {
public:
/*
So the intituition is :-
insert the element in the map 
then check that the element freq is greater than target 
if it is then check the the element is not present in the set 
it it is not present then simply add it and push it in the answer array 

*/
    vector<int> majorityElement(vector<int>& nums) {
    // Better Approach

    //    unordered_map<int , int>mpp;
    //    unordered_set<int>sett;
    //    vector<int>ans;
    //    int target = nums.size()/3;

    //    for(int i = 0 ; i <nums.size() ; i++){
    //     mpp[nums[i]]++;

    //     auto it = mpp.find(nums[i]);


    //     if(it->second > target){
    //         auto it2 = sett.find(nums[i]);

    //         if(it2 == sett.end()){
    //             sett.insert(nums[i]);
    //             ans.push_back(nums[i]);
    //         }
            


    //     }

    //    }

    //    return ans;
   
   //Optimal approach using moore voting algo 

   int count1 = 0;
   int count2 = 0;
   int ele1 = INT_MAX;
   int ele2 = INT_MIN;

   for(int i = 0 ; i < nums.size() ; i++){
    if(count1 == 0 && ele2 != nums[i]){
        ele1 = nums[i];
        count1++;
    }else if(count2 == 0 && ele1 != nums[i]){
        ele2 = nums[i];
        count2++;
    }else if(nums[i] == ele1){
        count1++;
    }else if(nums[i] == ele2){
        count2++;
    }else{
        count1--;
        count2--;
    }
   }


   int freq1 = 0;
   int freq2 = 0;  
   vector<int>ans;                     
   for(int i = 0 ; i < nums.size() ; i++){

    if(nums[i] == ele1){
        freq1++;
    }

    if(nums[i] == ele2){
        freq2++;
    }

   }

  int mini = int(nums.size() / 3) + 1;
    if (freq1 >= mini) ans.push_back(ele1);
    if (freq2 >= mini) ans.push_back(ele2);
   

   return ans;
        
    }
};