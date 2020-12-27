N=int(input())
height=[]
weight=[]

for i in range(N):
    w,h=map(int,input().split())
    weight.append(w)
    height.append(h)


for i in range(N):
    rank=1
    for j in range(N):
        if (i != j) and (weight[i] < weight[j]) and (height[i] < height[j]):
            rank+=1

    print(rank,end=' ')
         
