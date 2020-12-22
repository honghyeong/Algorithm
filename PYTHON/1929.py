# 에라토스테네스의 체 
#Sieve of Eratosthenes 

m,n=map(int,input().split())

a=[False,False]+[True]*(n-1)

for i in range(0,int( n**(1/2))+1):
    if a[i]:
        for j in range(2,int(n/i)+1):
            if a[i*j]:
                a[i*j]=False

for p, q in enumerate(a):
    if p>=m and q:
        print(p)

