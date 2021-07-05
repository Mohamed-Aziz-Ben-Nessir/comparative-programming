def bubbleSorting(l):
    swapped=True
    while swapped : 
        swapped = False
        for i in range(len(l)-1):
            if(l[i]<l[i+1]): 
                l[i],l[i+1]=l[i+1],l[i]
                swapped=True

l=[]
for i in range (10):
    l.append(int(input("")))
print(l)
bubbleSorting(l)
print(l)

