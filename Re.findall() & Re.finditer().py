#https://www.hackerrank.com/challenges/re-findall-re-finditer
import re
ans=re.findall(r'(?<=[QWRTYPSDFGHJKLZXCVBNMqwrtypsdfghjklzxcvbnm])([aeiouAEIOU]{2,})(?=[QWRTYPSDFGHJKLZXCVBNMqwrtypsdfghjklzxcvbnm])',input().strip())
print("\n".join(ans) if len(ans)>0 else "-1")
