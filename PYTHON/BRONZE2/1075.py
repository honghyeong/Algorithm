n=int(input())
f=int(input())

k=n%100
n-=k
limit=n+100

while n<limit :
    if not n%f :
        break
    else:
        n+=1

ang=str(n)

print(ang[-2]+ang[-1])
