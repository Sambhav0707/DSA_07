
class Solution {
  int maximum69Number (int num) {
    String number = num.toString();
    List<String> chars = number.split('');

    for(int i = 0 ; i <chars.length ; i++){
        if(chars[i] == '6'){
            chars[i] = '9';
            break;
        }
    }

    String newNumber = chars.join('');


    return int.parse(newNumber);

    
  }
}