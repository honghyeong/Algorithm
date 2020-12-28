# 비교할 8X8 블럭을 미리 만들어 놓고, NXM 보드의 가능한 시작점을 구한다.
# 'W'로 시작하는 8X8, 'B'로 시작하는 8X8 보드와 비교해서 가장 작은 블럭을 변경해야하는 값 출력하기

N,M=map(int,input().split())
a=[]
W_first=["WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW"]
B_first=["BWBWBWBW","WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW","WBWBWBWB"]


for i in range(N):
    a.append(input())


min=64

for i in range(N-7):
    for j in range(M-7): # 비교할 8X8 블럭을 미리 만들어 놓고, NXM 보드의 가능한 시작점을 구한다.
        sum1=0
        sum2=0
        for p in range(8):
            for q in range(8): # 'W'로 시작하는 8X8, 'B'로 시작하는 8X8 보드와 비교해서 가장 작은 블럭을 변경해야하는 값 출력하기

                if(a[i+p][j+q]!=W_first[p][q]):
                    sum1+=1
                if(a[i+p][j+q]!=B_first[p][q]):
                    sum2+=1
        if sum1<min:
            min=sum1
        if sum2<min:
            min=sum2


print(min)
