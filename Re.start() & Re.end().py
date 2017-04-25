#https://www.hackerrank.com/challenges/re-start-re-end
import re
s=input()
k=input()
flag=0
for i in re.finditer(r'(?='+k+')',s):
    print((i.start(),i.start()+len(k)-1))
    flag=1
if flag==0:
    print("(-1, -1)")
