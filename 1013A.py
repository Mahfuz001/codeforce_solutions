input()
print(('Yes', 'No')[sum(map(int, input().split())) < sum(map(int, input().split()))])