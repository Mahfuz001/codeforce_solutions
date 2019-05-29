n = int(input())
total = 0
mx = 0

for i in range(n):
	a,b = [int(x) for x in input().split()]
	total -= a
	total += b
	mx = max(total, mx)
	
print(mx)
