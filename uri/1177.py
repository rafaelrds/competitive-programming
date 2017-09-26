T = int(raw_input())
N = [0] * 1000
for i in xrange(1000):
    N[i] = i % T
    print "N[%d] = %d" % (i, N[i])
