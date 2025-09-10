class Solution {
public:
    int countHomogenous(string s) {
       long long ans = 0;
        int count = 0;
        int MOD = 1e9 + 7; // This is 10^9 + 7

        for (int i = 0; i < s.size(); ++i) {
            // Increment the count for the current character
            count++;

            // A block ends if we are at the last character OR the next character is different
            if (i == s.size() - 1 || s[i] != s[i+1]) {
                // Calculate substrings for the current block of length 'count'
                long long substrings_for_block = (long long)count * (count + 1) / 2;
                
                // Add to the total answer and apply modulo
                ans = (ans + substrings_for_block) % MOD;
                
                // Reset the count for the next block
                count = 0;
            }
        }
        
        return (int)ans;
        
    }
};