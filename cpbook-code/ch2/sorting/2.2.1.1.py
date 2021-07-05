from fractions import Fraction

def sortTuples(l): 
    return sorted(sorted(sorted(l,key=lambda x:x[0]),key=lambda x:x[1],reverse=True),key=lambda x:x[2])
def sortFractions(l): 
    return sorted(l)

l=[(1,"Y","A"),(1,"Z","A"),(2,"Y","B"),(2,"Y","A")]
a=[Fraction(5,3),Fraction(1,2),Fraction(11,13),x,Fraction(12,13),Fraction(13,13)]
print(l)
print(a)
l=sortTuples(l)
a=sortFractions(a)
print(a)
print(l)
