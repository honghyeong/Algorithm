## 강 동쪽 사이트 중에서 서쪽 사이트 개수 n개 만큼 택하면
## 겹치지않게 다리를 세우는 것은, 곧 순서가 결정된다는 뜻이다.
## 따라서, Combination(조합)으로 풀이함.

def factorial(n):
    res=1
    for i in range(1,n+1):
        res*=i
    return res

def comb(n,m):
    a=factorial(n)
    b=factorial(m)
    c=factorial(n-m)
    return a//(b*c)
    


T=int(input())
for i in range(T):
    a,b=map(int,input().split())
    print(comb(b,a))
    
