n=123456*2  # 시간 초과 문제 떄문에, 미리 입력의 최대값만큼 에라토스테네스의 체를 만들었다.

a=[False,False]+[True]*(n-1)

   
for i in range(2,int(n**(1/2))+1):
    if a[i]:
       for j in range(2*i,n+1,i):
           a[j]=False

def prime_count(n):
    cnt=0

    for i in range(n+1,2*n+1):
        if a[i]:
            cnt+=1

    print(cnt)

while True:
    m=int(input())
    if m==0:
        break

    prime_count(m)
               

