import numpy as np 
t=int(input())
for i in range(t):
    l1=[3,1,2,3]
    l2=[4,4,5,6,7]
    l3=[5,8,9,10,11,12]
    # l1=input().split(" ")
    #l2=input().split(" ")
    #l3=input().split(" ")
    r1=list(np.setdiff1d(l1,l2+l3))
    r2=list(np.setdiff1d(l2,l2+l3))
    r3=list(np.setdiff1d(l3,l1+l2))
    lenr=max(len(r1),max(len(r2),len(r3)))
    print((len(r1)==lenr)*l1,(len(r2)==lenr)*l2,(lenr==len(r3))*r3)

    
