amount=int(input())
coins=list(map(int,input().split()))
li=[0]*(amount+1)
li[0]=1
for i in coins:
    for j in range(0,amount+1):
        if(j>=i):
            li[j]=li[j]+li[j-i]
            print(*li,sep=" ")

print(li[amount])
