import math

def print_cross(x,y,r1,r2):
    distance=math.sqrt(x**2+y**2)
    if distance > r1+r2:
        print(0)
    elif distance == r1+r2:
        print(1)
    elif distance <r1+r2 and distance> abs(r1-r2):
        print(2)
    elif distance == 0 and r1==r2:
        print(-1)
    elif distance == abs(r1-r2):
        print(1)
    else:
        print(0)
    
T=int(input())
for i in range(T):
    x1,y1,r1,x2,y2,r2=map(int,input().split())
    print_cross(x1-x2,y1-y2,r1,r2)


