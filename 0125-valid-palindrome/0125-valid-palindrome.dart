class Solution {
  bool isPalindrome(String s) {
   String cleaned = s
    .split('') // convert to list of chars
    .where((c) => RegExp(r'[a-zA-Z0-9]').hasMatch(c))
    .join(); 
    
   cleaned = cleaned.toLowerCase();


    String temp = cleaned;
    String reversed = cleaned.split('').reversed.join();


    if(reversed != temp){
        return false;
    }

    return true;

         
  }
}