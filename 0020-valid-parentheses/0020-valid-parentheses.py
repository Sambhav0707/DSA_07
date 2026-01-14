class Solution:
    def isValid(self, s: str) -> bool:
        st = deque()

        open_list = ["(" , "{" , "[" ]
        close_list = [")" , "}" , "]"]

        for i in range(len(s)):
            if not st or s[i] in open_list:
                st.append(s[i])
            else:
                close = st.pop()

                if (close == "(" and s[i] == ")") or  (close == "{" and s[i] == "}") or  (close == "[" and s[i] == "]"):
                    pass
                else:
                    return False
        
        if st :
            return False
        
        return True

        