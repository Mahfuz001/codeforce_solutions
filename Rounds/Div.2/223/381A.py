#
#  author: MahfuzAhmed
#  created: 29.07.2019 
#

t = int(input())

arr = [int(x) for x in input().split()]

l = 0
r = t-1
b = [0, 0]

cnt = 0

for i in range(t):
    if(arr[l] > arr[r]):
        b[cnt % 2] += arr[l]
        l += 1
    else:
        b[cnt % 2] += arr[r]
        r -= 1

    cnt += 1
    
    
print(b[0], b[1], sep = " " , end = "\n")
