class Solution:
    def calculate(self, s: str) -> int:
        st = collections.deque()

        
        last_op = "+"
        cur_num = 0

        for i in range(len(s)):

            if s[i].isdigit() :
                cur_num = cur_num * 10 + int(s[i])
            
            if (not s[i].isdigit() and s[i] != " ") or i == len(s) - 1:
                    if last_op == "+":
                        st.append(cur_num)
                        last_op = s[i]
                    elif last_op == "-":
                        st.append(-cur_num)
                        last_op = s[i]
                    elif last_op == "*":
                        if st:
                            new_num = st.pop() * cur_num 
                        st.append(new_num)
                        last_op = s[i]
                    elif last_op == "/":
                        if st:
                            new_num = int(st.pop() / cur_num) 
                        st.append(new_num)
                        last_op = s[i]

                    cur_num = 0
                    
        
        return sum(st)


        