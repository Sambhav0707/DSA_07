class Solution {
  List<int> getConcatenation(List<int> nums) {

    List<int>nums2 = nums;

    List<int>ans = [...nums , ...nums2];

    return ans;
    
  }
}