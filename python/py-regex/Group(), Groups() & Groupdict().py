#https://www.hackerrank.com/challenges/re-group-groups
import re
s=re.search(r'([A-Za-z0-9])\1+',input().strip())
print(s.group(1) if s else -1)
