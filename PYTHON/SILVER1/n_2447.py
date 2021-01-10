
# 출력 형식이 잘못되었습니다.

def full_star(N):
    a=[]
    for i in range(N):
        b=[]
        for j in range(N):
            b.append('*')
        a.append(b)
    return a



def blank_star(size,lst,N):

    if(N==3):
        for i in range(1,size,3):
            for j in range(1,size,3):
                lst[i][j]=' '
                
    else:
    
        for i in range(N//3,size,N):
            for j in range(N//3,size,N):
                for p in range(N//3):
                    for q in range(N//3):
                        lst[i+p][j+q]=' '


        blank_star(size,lst,N//3)

    
    
def print_star(lst,N):
    for i in range(N):
        for j in range(N):
            print(lst[i][j],end='')
        if i!=N-1:
            print('\n')


N=int(input())

lst=full_star(N)
blank_star(N,lst,N)
print_star(lst,N)

