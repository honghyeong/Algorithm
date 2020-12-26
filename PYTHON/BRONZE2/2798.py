#bruteforce algorithm

N,M=map(int,input().split())
a=list(map(int,input().split()))

def bruteforce(a,limit):
    max=0
    length=len(a)
    for x in range(length):
        for y in range(x+1,length):
            for z in range(y+1,length):
                b=a[x]+a[y]+a[z]
                if b>max and b<=limit:
                   max=b
            
            
    print(max)

bruteforce(a,M)

