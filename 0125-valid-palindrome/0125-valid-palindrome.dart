class Solution {
  bool isPalindrome(String s) {
   String cleaned = s
    .split('') // convert to list of chars
    .where((c) => RegExp(r'[a-zA-Z0-9]').hasMatch(c))
    .join(); 
    
   cleaned = cleaned.toLowerCase();

  

   int l = 0 ;
   int r = cleaned.length - 1;
   while(l<=r){

    if(cleaned[l] == cleaned[r]){
        l++;
        r--;

    }else{
        return false;
        break;
    }
   }
   return true;
    // String temp = cleaned;
    // String reversed = cleaned.split('').reversed.join();


    // if(reversed != temp){
    //     return false;
    // }

    // return true;

         
  }
}