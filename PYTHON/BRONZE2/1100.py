a=0

for i in range(4):
    s1=input()
    s2=input()

    for x in range(8):
        if s1[x]=='F' and (not x%2):
            a+=1
        if s2[x]=='F' and x%2:
            a+=1
        

print(a) 
        
    
