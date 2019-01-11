for _ in range(int(input())):
    n,a,b=map(int,input().split())
    l=list(map(int,input().split()))
    nu=a
    flag=1
    
    while(flag==1):
        if(nu==a):
            for i in range(len(l)):
                if(l[i]%nu==0):
                    
                    l.pop(i)
                    nu=b
                    print(l)
                    break
                elif(l[i]%nu!=0 and i==len(l)-1):
                    flag=0
                    print("ALICE")
                    break
                
        elif(nu==b):
            for j in range(len(l)):
                if(l[j]%nu==0):
                    l.pop(j)
                    nu=a
                    print(l)
                    break
                elif(l[j]%nu!=0 and i==len(l)-1):
                    flag=0
                    print("BOB")
                    break
    print("hello")
            
                    
        
        
