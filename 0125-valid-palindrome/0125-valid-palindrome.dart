class Solution {
  bool isPalindrome(String s) {
    // s = s
    // .split('') // convert to list of chars
    // .where((c) => RegExp(r'[a-zA-Z0-9]').hasMatch(c))
    // .join(); 
    
   s = s.toLowerCase();

  

   int l = 0 ;
   int r = s.length - 1;
   while(l<=r){

    if(!RegExp(r'[a-zA-Z0-9]').hasMatch(s[l]) ){
        l++;
        continue;
       

    }
    if(!RegExp(r'[a-zA-Z0-9]').hasMatch(s[r]) ){
        r--;
        continue;
       

    }

    if(s[r] == s[l]){
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