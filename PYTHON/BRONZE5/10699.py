import time
print(time.strftime('%Y-%m-%d',time.localtime(time.time()))) 

# time.strftime : 지정 형식에 포맷에 맞춰 문자열 반환
# time.localtime(time.time()) : time.time()반환 값을 현재 위치에 맞는 표준시로 변경해줌 
