#완성 후 구멍뚫기.
#입력
N=int(input())

#base 패턴 생성
arr=[['*']*N for _ in range(N)]
v=N
cnt=0

while v!=1: # N이 3의 몇 승인지 확인
    v/=3
    cnt+=1
    
#패턴이 대각선 대칭이라는 점에서, idx만 구하면 패턴 완성이 가능하다.
#패턴별로 패턴단위를 묶어서 몇번째 row인지 확인하면, if문과 인덱스의 규칙이 발견된다.
#예를 들면, 빈칸 1x1 패턴은 1,4,7,10.... (N%3==1)
#빈칸 3x3 패턴은 (3,4,5),(12,13,14)... (N//3%3==1)

for cnt_ in range(cnt):
    blank=[idx for idx in range(N) if (idx//3**cnt_)%3==1]
    for i in blank:
        for j in blank:
            arr[i][j]=' '

#출력
print('\n'.join([''.join([str(i) for i in row]) for row in arr]))
