def quickSort(l): 
    if len(l)<=1 :
        return l 
    else:
         piv=l.pop()
    G=[]
    L=[]
    for i in l : 
        if i > piv:
            G.append(i)
        else: 
            L.append(i)
    return quickSort(L)+[piv]+quickSort(G)

l=[]
for i in range(6):
    l.append(int(input()))
print(l)
l=quickSort(l)
print(l)

