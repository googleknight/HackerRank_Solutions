#https://www.hackerrank.com/challenges/introduction-to-regex
import re
n=int(input())
for i in range(n):
    x=input()
    print(bool(re.match("^[+-]?\d*\.\d+$",x)))
