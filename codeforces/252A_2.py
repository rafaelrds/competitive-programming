n , v  = map(int,raw_input().split())
sellers = []
for q in xrange(n):
	sel = map(int,raw_input().split())
	#print sum(sel[1:])
	for item in sel[1:]:
		if v > item:
			sellers.append(q+1)
			break
		
sellers.sort()

if len(sellers) == 0:
	print 0
else:
	print len(sellers)
	print '%s' % ' '.join(map(str, sellers))