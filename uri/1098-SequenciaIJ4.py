for i in xrange(1,29):
	if(i%4 != 0):
		x = 0.2 * (i- i%4)/4
		y = i % 4

		print "%.1f %.1f" % (x ,x+y) 