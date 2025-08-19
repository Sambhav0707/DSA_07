class Solution {
  String convert(String s){
    return s.substring(1) + s[0];
  }
  bool rotateString(String s, String goal) {
    String sub = s;
    for(int i = 0 ; i<s.length ; i++){

        sub = convert(sub);

        if(sub == goal){
            return true;
            break;
        }
       

    }
    return false;
    
  }
}