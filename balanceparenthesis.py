n=input()
c=0
l=[]
st=""
se=list(n)
for i in range(len(n)):
    if(n[i]=='('):
        c=c+1
    else:
        c=c-1
if(c==0):
    print(str(n))

elif(n[-1]=='('):
    st=n[:-1]
    
    print(st)  
else:    
    for i in range(len(n)):
        if(n[i]=='('):
            l.append('(')
        else:
            if(len(l)>0):
                l.pop()
            else:
           
            
                s=n
                for j in range(i-1,-1,-1):
                    s=list(n)
                    if(s[j]==')'):
                        s=list(n)
                        del s[j]
                    if(s!=se):
                        print(*s,sep="")
