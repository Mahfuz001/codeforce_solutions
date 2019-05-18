inp = map(int,raw_input().split())
n = inp[0]
t = inp[1]
number = 0
temp = 10**(n-1)

fraction = temp/t
if (temp%t == 0):
	number = temp + t
else:
	number = (fraction+1)*t
number1 = str(number)
if number1[-1] == '0':
	number += t
lis = list(str(number))
if len(lis) == n:
	print number
else:
	print '-1'