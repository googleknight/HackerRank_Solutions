#https://www.hackerrank.com/challenges/python-lists
n=int(input())
a=[]
for i in range(n):
    x=input()
    x=x.split()
    if x[0]=="append":
        a.append(int(x[1]))
    elif x[0]=="insert":
        a.insert(int(x[1]),int(x[2]))
    elif x[0]=="remove":
        a.remove(int(x[1]))
    elif x[0]=="pop":
        a.pop()
    elif x[0]=="index":
        print(a.index(int(x[1])))
    elif x[0]=="count":
        print(a.count(int(x[1])))
    elif x[0]=="sort":
        a.sort()
    elif x[0]=="reverse":
        a.reverse()
    elif x[0]=="print":
        print(a)
