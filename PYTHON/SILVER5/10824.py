from operator import itemgetter
import sys
N=int(sys.stdin.readline())
a=[]
for i in range(N):
    b=sys.stdin.readline().split()
    a.append([int(b[0]),b[1],i])

c=sorted(a,key=itemgetter(0,2))

for i in c:
    print(i[0],i[1],sep=' ')
