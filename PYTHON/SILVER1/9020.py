limit=10000

a=[False,False]+[True]*(limit-1)
for i in range(2,int(limit**(1/2))+1):
    if a[i]:
        for j in range(2*i,limit+1,i):
            if a[j]:
                a[j]=False

T=int(input())


def gold_partition(n):

    min=n
    p1=0
    p2=0

    for i in range(2,n//2+1):
        if a[i] and a[n-i] and min>n-2*i:
            min=n-2*i
            p1=i
            p2=n-i
            
    print(p1,p2)
        


for i in range(T):
    k=int(input())
    gold_partition(k)
    
