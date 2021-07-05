def binarySearch(l,val):
    i=len(l)//2
    if l[i]==val:
        return i
    if l[len(l)-1] < val :
        return -1 
    if(l[i]>val):
        return binarySearch(l[:i],val)
    return binarySearch(l[i:],val)

l=[i for i in range(11)]
l.sort()
n=int(input())
print(binarySearch(l,n))

