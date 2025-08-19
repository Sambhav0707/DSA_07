class Solution {
  /* 
  WE WILL MAKE A FUNCTION THAT GIVES US THE ROTATED STRING 
  BY SHIFTING THE RIGHT MOST CHAR TO THE LEFT MOST CHAR
   */  
  String convert(String s){
    return s.substring(1) + s[0];
  }
  bool rotateString(String s, String goal) {

    String sub = s; // WE THEN ASSIGN S TO A VARIABLE STRING 
    for(int i = 0 ; i<s.length ; i++){

        sub = convert(sub); // WE ROTATE THE VARIABLE STRING

        if(sub == goal){
            return true; // THEN WE CHECK FOR EACH ROTATION 
            break;
        }
       

    }
    return false;
    
  }
}