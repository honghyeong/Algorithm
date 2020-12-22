value={'black':0,'brown':1,'red':2,'orange':3,'yellow':4,
       'green':5,'blue':6,'violet':7,'grey':8,'white':9}
    
f=input()
s=input()
t=input()

temp=str(value[f])+str(value[s])
temp=int(temp)

print(temp*(10**value[t]))
