N=int(input())

num=665
while True:
    num+=1
    if (str(num)).find("666")!=-1:
        N-=1
    
    if N==0:
        break


print(num)
