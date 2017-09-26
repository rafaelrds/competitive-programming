n = int(raw_input())

for i in xrange(n):
	a, b = map(int,sorted(raw_input().split()) )
	if (a-b != 0):
		if a % 2 == 0:
			a = (a/2) - 1
		else:
			a = (a-1) / 2
		if b % 2 == 0:
			b = (b/2) 
		else:
			b = (b-1) / 2

		print (b**2 - a**2 - 2*a -1)
	else: print "0"