#20
class Solution:
    def isValid(self, s: str) -> bool:
        stack=[]
        table={')':'(',
               '}':'{',
               "]":'['}

        for char in s:
            if char not in stack:
                stack.append(stack)
            elif not stack or table[char]!=stack.pop():
                return False
        return len(stack)==0
