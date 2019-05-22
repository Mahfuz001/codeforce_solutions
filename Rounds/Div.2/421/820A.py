c, v0, v1, a, l = [int(x) for x in input().split()]

currPage = v0
day = 1

x = v0

while(currPage < c):
    x = min(v1, x+a)
    
    currPage += x - l
    day += 1
    
print(day)
