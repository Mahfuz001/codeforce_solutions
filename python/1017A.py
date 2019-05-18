n = int(input())

a = list()
b = list()
c = list()
d = list()

for i in range(n):
    inp = list(input().split())
    a.append(int(inp[0]))
    b.append(int(inp[1]))
    c.append(int(inp[2]))
    d.append(int(inp[3]))

stm = list()

for i in range(n):
    stm.append(a[i]+b[i]+c[i]+d[i])

thomas = stm[0]
pos = 1

for i in range(n):
    if stm[i] > thomas:
        pos += 1
print(pos)