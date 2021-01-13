# sys를 이용한 입출력 속도 확보
# sys -> sys.stdin.readline() : 한 줄 읽음
# sys -> sys.stdout.write("string") : 문자열 출력 

import sys

N=int(input())
l=[]
for _ in range(N):
    l.append(int(sys.stdin.readline()))

for i in sorted(l):
    sys.stdout.write(str(i)+'\n')
