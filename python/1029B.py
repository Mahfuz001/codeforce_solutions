n = int(input())
a = list(map(int, input().split()))
count = 1
result = 1
for i in range(1, n):
    if a[i] <= a[i-1]*2:
        count += 1
    else:
        count = 1
    result = max(result, count)
print(result)