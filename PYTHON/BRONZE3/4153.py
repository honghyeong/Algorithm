def pythagoras(a,b,c):

    if( c**2 == a**2 + b**2):
        print("right")
    else:
        print("wrong")


while True:
    
    a,b,c=map(int,input().split())
    if not(a or b or c):
        break
    t=[]
    t.append(a)
    t.append(b)
    t.append(c)
    t.sort()

    pythagoras(*t)
