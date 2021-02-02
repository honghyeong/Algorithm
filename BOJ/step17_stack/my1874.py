import sys
from typing import *

def print_sequence(s:List[int])->str:
    result=[]
    before=0
    cur_max=0
    reminder=len(s)
    for value in s[:s.index(max(s))+1]:
        if value>before:
            result=result+['+']*(value-cur_max)
            result=result+['-']
            reminder-=1
            cur_max = max(cur_max, value)
        elif value<before:
            result=result+['-']
            reminder-=1

    result=result+['-']*reminder

    value=1
    stack=[]
    cmp=[]
    for i in result:
        if i=='+':
            cmp.append(value)
            value+=1
        elif i=='-':
            stack.append(cmp.pop())

    if stack[:]==s[:]:
        # print('cmp',stack)
        # print('result',result)
        return '\n'.join(result)
    else:
        # print('cmp', stack)
        # print('result', result)
        return "NO"


input=sys.stdin.readline

n=int(input().strip())
arr=[]
for _ in range(n):
    a=int(input().strip())
    arr.append(a)

sys.stdout.write(print_sequence(arr))
