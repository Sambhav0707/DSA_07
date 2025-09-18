class Solution {
  List<int> decrypt(List<int> code, int k) {

    if(k == 0){
        for(int i = 0 ; i<code.length ; i++){
            code[i] = 0;
        }
        return code;
    }
  List<int>code2 = [...code , ...code];
   List<int> ans = [];
    if(k > 0){
   
   
    for(int i = 0 ; i<code.length ; i++){
        int sum = 0;
        for( int  j = 1 ; j<= k ; j++){
            sum += code2[i+j];
        }
        ans.add(sum);
    }


    return ans;

    }

    int p = -k;
    for(int i = 0 ; i<code.length ; i++){
        int sum = 0;
        for( int  j = 1 ; j<= p ; j++){
            sum += code2[i+code.length -j];
        }
        ans.add(sum);
    }

    return ans;





  


    
  }
}