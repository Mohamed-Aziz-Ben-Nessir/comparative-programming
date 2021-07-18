s=int(input())
b=int(input())
s=list(range(1,s+1))

for i in range(b):
    l=int(input())
    r=int(input())
    x=list(range(l,r+1))
    if(s.index(l)==0):
        l='*'
    else:
        l=s[s.index(l)-1]
    if(s.index(r)==len(s)-1):
        r='*'
    else :
        r=s[s.index(r)+1]
    print(l,r)
    s=list(set(s)-set(x))
