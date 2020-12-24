#round( a, 4 ) : 소수점 아래 넷째자리 보여주고싶을때 사용, 다섯번째 자리에서 반올림 시행

import math

def taxi(R):
    print(2*float(R)*float(R))
    

def Euclid(R):
    print(R*R*math.pi)

R=int(input())
Euclid(R)
taxi(R)


