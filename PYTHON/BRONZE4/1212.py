##  python 첫 진수 변형문제
##  https://www.daleseo.com/python-int-bases/ (참고)
##  hex(), oct(), bin() : 인자로 받은 숫자를 해당 진수로 변환해서 string으로 반환
##  format( number , 'b' )  : 10101101 형식(str)으로 반환 ('o', 'x' 동일)   ;; 접두어 제외할 때 사용
##  format( number , '#b' ) : 0b101011101 형식(str)으로 반환 ('o', 'x' 동일)  ;; 접두어 포함할 때 사용
##  int('number', base) : number문자열을 base에 맞게 10진수로 변환하여 

a=input()
n=int(a,8)
print(format(n,'b'))
