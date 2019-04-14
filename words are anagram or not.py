for _ in range(int(input())):
    st1=input()
    st2=input()
    ar=[0]*256
    flag=1
    if(len(st1)==len(st2)):
        for i in st1:
            ar[ord(i)]=ar[ord(i)]+1
        for i in st2:
            ar[ord(i)]=ar[ord(i)]-1
    for i in ar:
        if(i!=0):
            flag=0
            break
    if(flag==0):
        print("NO")
    else:
        print("YES")
    
        

