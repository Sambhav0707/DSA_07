class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>st;
        for(int i  = 0 ; i<operations.size() ; i++){
            if(!st.empty() && operations[i] == "C"){
                st.pop();
            }else if(!st.empty() &&  operations[i] == "D"){
                int ans = st.top() * 2;
                st.push(ans);
            }else if(!st.empty() &&  operations[i] == "+"){
                int temp1 = st.top();
                st.pop();
                int temp2 = st.top();
                int ans = temp1 + temp2;

                st.push(temp1);
                st.push(ans);
            }else{
                st.push(stoi(operations[i]));
            }

        }
        int ans = 0;
        while(!st.empty()){
            int temp = st.top();
            ans += temp;
            st.pop();
        }

        if(!st.empty()) ans += st.top();

        return ans;
        
    }
};