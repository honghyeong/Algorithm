N,M=map(int,input().split())
a=[]
W_first=["WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW"]
B_first=["BWBWBWBW","WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW","WBWBWBWB"]


for i in range(N):
    a.append(input())


min=64

for i in range(N-7):
    for j in range(M-7):
        sum1=0
        sum2=0
        for p in range(8):
            for q in range(8):
                if(a[i+p][j+q]!=W_first[p][q]):
                    sum1+=1
                if(a[i+p][j+q]!=B_first[p][q]):
                    sum2+=1
        if sum1<min:
            min=sum1
        if sum2<min:
            min=sum2


print(min)
