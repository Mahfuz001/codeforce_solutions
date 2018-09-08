n = int(input())
s = list(input())
t = input()
ans = []
for i in range(n):
    for j in range(i, n):
        if s[j] == t[i]:
            pos = j
            break
    else:
        print(-1)
        break
    for j in range(pos, i, -1):
        s[j], s[j - 1] = s[j - 1], s[j]
        ans.append(j)
else:
    print(len(ans))
    print(*ans)