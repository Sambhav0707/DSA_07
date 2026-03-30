class Solution:
    def removeDuplicateLetters(self, s: str) -> str:
        last_occured = {char : i for i , char in enumerate(s)}

        stack = []

        seen = set()

        for i , char in enumerate(s):

            if char in seen:
                continue
            

            while stack and stack[-1] > char and i < last_occured[stack[-1]]:
                removed = stack.pop()
                seen.remove(removed)
            
            stack.append(char)
            seen.add(char)
        
        return "".join(stack)
        