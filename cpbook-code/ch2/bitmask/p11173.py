def grayCode(n,k):
    l=[0,1]
    j=1
    while(len(l)<k):
        x=y=[]
        for i in l:
            x.append(i&0<<j)
        for i in reversed(l):
            y.append(i|1<<j)
        l=x+y
        j+=1
    return l[]

t=int(input())
for i in range(t):
    n=int(input())
    k=int(input())
    print(grayCode(n,k))

