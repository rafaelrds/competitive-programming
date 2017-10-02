import sys
p, n = map(int,raw_input().split())
numbers = [-1]*p
count = 0
result = ""

for num in xrange(n):
	cod = int(raw_input()) % p
	
	if numbers[cod] == -1:
		numbers[cod] = cod
		count += 1
	else:
		count+=1
		result += str(count)
		break
		

if result == "":
	print "-1"
else:
	print result