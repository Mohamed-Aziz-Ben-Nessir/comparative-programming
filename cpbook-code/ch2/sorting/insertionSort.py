def insertionSort(l): 
    for i in range(1,len(l)):
        j=i
        while(l[j-1]>l[j] and j>0 ):
            l[j-1],l[j]=l[j],l[j-1]
            j-=1
l=[]
for i in range(5):
    l.append(int(input("")))
print(l)
insertionSort(l)
print(l)

