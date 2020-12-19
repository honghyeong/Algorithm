# 좀더 간단히 풀고싶다.

def work(l):
    h=l[3]-l[0]
    m=l[4]-l[1]
    s=l[5]-l[2]

    if s<0:
        s=60+s
        m-=1

    if m<0:
        m=60+m
        h-=1

    if h<0:
        h=24+m

    print(h,m,s)

for i in range(3):
    s=list(map(int,input().split()))
    work(s)

