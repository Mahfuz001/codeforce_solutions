#
#  author: krayr
#  created: 23.05.2019
#

import sys

n = int(input())

lst = [int(x) for x in input().split()]

cnt = 0

while(cnt < n-1 and lst[cnt] < lst[cnt+1]):
    cnt += 1

while(cnt < n-1 and lst[cnt] == lst[cnt+1]):
    cnt += 1

while(cnt < n-1 and lst[cnt] > lst[cnt+1]):
    cnt += 1

cnt += 1

if(cnt != n):
    print("NO")
else:
    print("YES")
