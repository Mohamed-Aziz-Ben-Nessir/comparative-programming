def mergeSort(l): 
    if len(l)>1 : 
        mid=len(l)//2 
        L=l[:mid]
        R=l[mid:]
        print("left : ",L)
        print("Right : ",R)
        mergeSort(L)
        mergeSort(R)
        i=j=k=0
        while i<len(L) and j < len(R) : 
            if L[i] < R[j] :
                 l[k]=L[i]
                 i+=1
            else: 
                l[k]=R[j]
                j+=1
            print(l[k])
            k+=1
        while i <len(L): 
            l[k]=L[i]
            i+=1
            k+=1
        while j<len(R):
            l[k]=R[j]
            j+=1
            k+=1

l=[]
for i in range(5):
    l.append(int(input("")))
print(l)
mergeSort(l)
print(l)





