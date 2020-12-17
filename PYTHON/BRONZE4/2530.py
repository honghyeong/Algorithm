h, m, s = map(int, input().split())
add = int(input())


s += add
m += s // 60
h += m // 60
s %= 60
m %= 60
h %= 24

# 알고리즘에 어떤 문제가 있는지 알아보자.
##h+=add//3600
##m+=(add%3600)//60
##s+=add%60
##
##if s>=60:
##    s-=60
##    m+=1
##if m>=60:
##    m-=60
##    h+=1
##if h>=24:
##    h-=24


print(h, m, s)
