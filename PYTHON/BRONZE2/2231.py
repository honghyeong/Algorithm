N=input()


def answer(a):

    for i in range(1,a):
        temp=str(i)
        sum=i
        
        for x in temp:
            sum+=int(x)
            
        if sum==a:
            return i

    return 0

print(answer(int(N)))
        
