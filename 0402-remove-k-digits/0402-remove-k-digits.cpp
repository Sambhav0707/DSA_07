class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st;

        // This part is correct!
        for(char digit : num) {
            while(!st.empty() && k > 0 && st.top() > digit) {
                st.pop();
                k--;
            }
            st.push(digit);
        }

        // This part is also correct!
        while(k > 0 && !st.empty()) {
            st.pop();
            k--;
        }

        // --- Start of Corrected Section ---

        // 1. Build the string in reverse order from the stack.
        string res = "";
        while(!st.empty()) {
            res.push_back(st.top());
            st.pop();
        }

        // 2. Reverse the string to get the correct order.
        reverse(res.begin(), res.end());

        // 3. Handle leading zeros on the final string.
        size_t pos = res.find_first_not_of('0');
        res = (pos == string::npos) ? "0" : res.substr(pos);

        return res;
    }
};