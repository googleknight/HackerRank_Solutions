#https://www.hackerrank.com/challenges/finding-the-percentage
n=int(input())
a={}
for i in range(n):
    x=input()
    data=x.split()
    a[data[0]]=map(float,list(data[1:4]))
x=input()
print ("%.2f"%(sum(a[x])/3.0))
