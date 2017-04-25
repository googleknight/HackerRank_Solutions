#https://www.hackerrank.com/challenges/symmetric-difference
input()
a=set(map(int,input().split()))
input()
b=set(map(int,input().split()))
c=list(a.union(b).difference(a.intersection(b)))
c.sort()
for x in c:
    print(x)
