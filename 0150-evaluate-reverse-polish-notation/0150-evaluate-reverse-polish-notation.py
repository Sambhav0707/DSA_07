class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        st = collections.deque()
        operations = ['+' , '-' , '/' , '*']

        for i in range(len(tokens)):
            if not tokens[i] in operations:
                st.append(int(tokens[i]))
            else:
                result = 0
                num1 = st.pop() if st else 0
                num2 = st.pop() if st else 0

                op = tokens[i]

                if op == "+":
                    result = num2 + num1
                elif op == "-":
                    result = num2 - num1
                elif op == "*":
                    result = num2 * num1
                elif op == "/":
                    if num1 == 0 or num2==0:
                        result = 0
                    else:
                        result = int(num2 / num1)
                
                st.append(result)
                
                
        
        return st.pop()





        