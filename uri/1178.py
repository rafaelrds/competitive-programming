X = float(raw_input())
N = [0.0] * 100
N[-1] = X*2

for i in xrange(100):
    previous = N[i-1]
    N[i] = previous/2.0
    print "N[%d] = %.4f" % (i, N[i])
