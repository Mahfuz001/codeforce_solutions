n, k = map(int, input().split())
s = input()

array = [0] * k

for i in s:
    array[ord(i) - ord("A")] += 1

print(min(array) *k )