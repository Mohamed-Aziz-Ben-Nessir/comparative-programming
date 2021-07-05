def selectionSort(l):
    for i in range(len(l)):
        min_indx=i
        for j in range(i+1,len(l)):
            if(l[min_indx]>l[j]):
                min_indx=j
        l[i],l[min_indx]=l[min_indx],l[i]

l=[]
for i in range(3): 
    l.append(int(input("")))
print(l)
selectionSort(l)
print(l)

