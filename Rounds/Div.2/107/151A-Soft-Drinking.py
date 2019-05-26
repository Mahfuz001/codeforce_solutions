#
#  author: krayr
#  created: 18.05.2019
#

n, k, l, c, d, p, nl, np = [int(x) for x in input().split()]

drnk = 0
lime = 0

drnk = (k*l) / nl
lime = c * d

ans = min(drnk,lime, (p/np)) / n
print(int(ans))
