n, m = list(map(int, input().split()))
a = list(map(int, input().split()))
mList = list()
t = list()
lp = 0

for i in range(0, n):
    a[i] += lp
    lp = a[i] % m
    t.append(int(a[i]/m))
print(*t)