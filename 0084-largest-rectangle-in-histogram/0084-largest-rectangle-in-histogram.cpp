class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        stack<int>st;
        int maxArea = 0;
        for(int i = 0 ; i < h.size() ; i++){
            int area = 0;
            while(!st.empty() && h[st.top()] > h[i]){
                area = h[st.top()] ;

                st.pop();

               if(st.empty()){
                area *= i;
               }else{ 
                area *= i - st.top() - 1;
                }

                 maxArea = max(maxArea , area);


            }
           
            st.push(i);
        }
        int area = 0;
        while(!st.empty()){
             area = h[st.top()] ;

             st.pop();

             if(st.empty()){
                area *= h.size();
               }else{ 
                area *= h.size() - st.top() - 1;
                }
             maxArea = max(maxArea , area);

        }
        

         return maxArea;
        
    }
};