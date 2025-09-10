class Solution {
public:
    int countHomogenous(string s) {
        int mod=1e9+7;
        int n=s.length();
        long long count=1;
        long long ans=0;
        char ch=s[0];
        for(int i=1;i<n;i++){
            if(s[i]==s[i-1]){
                count++;
            }
            else{
                ans+=(count*(count+1)/2)%mod;
                count=1;
            }
        }
        ans+=(count*(count+1)/2)%mod;
        return (int)ans;
    }
};