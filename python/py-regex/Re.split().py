#https://www.hackerrank.com/challenges/re-split
import re
print("\n".join(i for i in (re.split(r'[,.]',input().strip())) if len(i)>0))
