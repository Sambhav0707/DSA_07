/*
A valid parentheses string is either empty "", "(" + A + ")", or A + B, where A and B are valid parentheses strings, and + represents string concatenation.

For example, "", "()", "(())()", and "(()(()))" are all valid parentheses strings.
A valid parentheses string s is primitive if it is nonempty, and there does not exist a way to split it into s = A + B, with A and B nonempty valid parentheses strings.

Given a valid parentheses string s, consider its primitive decomposition: s = P1 + P2 + ... + Pk, where Pi are primitive valid parentheses strings.

Return s after removing the outermost parentheses of every primitive string in the primitive decomposition of s.

 

Example 1:

Input: s = "(()())(())"
Output: "()()()"
Explanation: 
The input string is "(()())(())", with primitive decomposition "(()())" + "(())".
After removing outer parentheses of each part, this is "()()" + "()" = "()()()".
Example 2:

Input: s = "(()())(())(()(()))"
Output: "()()()()(())"
Explanation: 
The input string is "(()())(())(()(()))", with primitive decomposition "(()())" + "(())" + "(()(()))".
After removing outer parentheses of each part, this is "()()" + "()" + "()(())" = "()()()()(())".
Example 3:

Input: s = "()()"
Output: ""
Explanation: 
The input string is "()()", with primitive decomposition "()" + "()".
After removing outer parentheses of each part, this is "" + "" = "".
 

Constraints:

1 <= s.length <= 105
s[i] is either '(' or ')'.
s is a valid parentheses string
*/

/** so the problem stats that we have to decompose a primitive paranthesis string 
 * for expamle :- "(()())(())" => "(()())" + "(())" => "()()()"
 */

 /*
 so the approach is that we will take the first charactor then we will increase the pointer and then 
 check that is charactor is ( then we increase the counter 
 if the charactor is ) then we decrease the counter
 if the counter != 0 then we push it into the string; 

 */
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
class Solution {
    public:
        string removeOuterParentheses(string s) {
           int count = 0;
           string ans = "";
           for(int i  = 0 ; i < s.length() ; i++){
            
            if(s[i] == ')') count--;
            if(count != 0) ans.push_back(s[i]);
            if(s[i] == '(') count++;
    
           }
           return ans;
    
        
        }
    };