#https://www.hackerrank.com/challenges/re-sub-regex-substitution
import re
def func(x):
    if x.group(0)=="&&":
        return "and"
    else:
        return "or"
n=int(input())
for i in range(n):
    s=input()
    print(re.sub(r"(?<=\s)(&&|\|\|)(?=\s)",func ,s))
