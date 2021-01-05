## x,y좌표 바꿔서 sort하면, y좌표먼저 오름차순, 다음으로 x좌표 오름차순으로 배열해준다.
## 다시 x,y좌표 바꿨는데 너무 비효율적이지않나 다른 방법 생각해보자.

N=int(input())

lst=[]
for i in range(N):
    lst.append(list(map(int,input().split())))

for i in range(N):
    lst[i][0],lst[i][1] =lst[i][1],lst[i][0]

lst.sort()


for i in range(N):
    lst[i][0],lst[i][1] =lst[i][1],lst[i][0]

for i in range(N):    
    print(lst[i][0],lst[i][1],sep=' ')
