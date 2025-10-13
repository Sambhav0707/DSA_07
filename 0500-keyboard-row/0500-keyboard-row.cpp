class Solution {
public:
    bool isInSameRow(int* hash , string word){
      int row = hash[tolower(word[0]) - 'a'];

    // Start from the second character and compare its row to the first one's
    for(int i = 1 ; i < word.size() ; i++){
        if(hash[tolower(word[i]) - 'a'] != row) {
             return false;
        }
    }
    return true;

    }
    vector<string> findWords(vector<string>& words) {
      int hash[26] = {};
      string r1 = "qwertyuiop";
      string r2 = "asdfghjkl";
      string r3 = "zxcvbnm";
      for(char c : r1){
        hash[c - 'a'] = 1;
      }
      for(char c : r2){
        hash[c - 'a'] = 2;
      }
      for(char c : r3){
        hash[c - 'a'] = 3;
      }
     vector<string>ans;
      for(int i = 0 ; i < words.size() ; i++){
        if(isInSameRow(hash , words[i])) ans.push_back(words[i]);
      }

      return ans;

        
    }
};