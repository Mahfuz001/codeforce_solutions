n, m = list(map(int, input().split()))

l = list()
r = list()
h = list()
h2 = list()

for i in range(0, n):
    inp = list(map(int, input().split()))
    l.append(inp[0])
    r.append(inp[1])

for i in range(0, n):
    for j in range(l[i], r[i]+1):
        h.append(j)
for i in range(1, m+1):
    if i not in h:
        h2.append(i)
if len(h2) != 0:
    print(len(h2))
    for i in range(0, len(h2)):
        print(h2[i], end=" ")
    print()
else:
    print(len(h2))