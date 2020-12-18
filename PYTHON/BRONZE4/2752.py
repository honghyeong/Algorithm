a=list(map(int,input().split()))
a.sort()
for i in a:
    print(i,end=' ')

##내림차순 문제라면, a.sort(reversed=False)
