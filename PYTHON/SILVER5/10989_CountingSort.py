import sys
input=sys.stdin.readline
n=int(input())

cnt_array=[0]*(10000+1)
for _ in range(n):
    cnt_array[int(input())]+=1
for i in range(1,10000+1):
    for j in range(cnt_array[i]):
        sys.stdout.write(str(i)+'\n')
