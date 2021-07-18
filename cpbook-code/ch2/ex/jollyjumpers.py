
n=int(input())
s=set() 
x=int(input())
for i in range(n-1):
    y=int(input())
    s.add(abs(x-y))
    x=y
sorted(s)
if list(range(1,n)) == list(s):
    print("Jolly")
else:
    print("Not jolly")
