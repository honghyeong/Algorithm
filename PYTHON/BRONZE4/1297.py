# 높이 9x, 너비 16x
# 피타고라스의 정리 사용

import math

def x(di,h,b):
    return math.sqrt((di**2)/((h**2)+(b**2)))

di,h,b=map(int,input().split())
temp_x=x(di,h,b)
print(int(h*temp_x))  // 소수점 아래 버림
print(int(b*temp_x))  // 소수점 아래 버림
