from operator import itemgetter
import sys
N=int(sys.stdin.readline())
a=[]
for _ in range(N):
    a.append(sys.stdin.readline().strip())
b=[]
for i in a:
   b.append([i,len(i)])

c=sorted(b,key=itemgetter(1,0))
dup=[]
for i in c:
    if i[0] not in dup:
        print(i[0])
        dup.append(i[0])
