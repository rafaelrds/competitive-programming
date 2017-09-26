from math import log, factorial, floor

def pow(a,b):
	k = a
	for i in xrange(b-1):
		k *= a
	return k

n = int(raw_input())
pedro_win = [False]*n

for i in xrange(n):
	try:
		a, b = map(int,raw_input().split('^'))
		c = int(raw_input()[:-1])
	except(EOFError):
		break
	power = floor(log(int(pow(a,b)))) 
	facto = floor(log(factorial(c)))
	print facto, power
	if power < facto:
		pedro_win[i] = True
		
lucas = pedro_win.count(False)
pedro = pedro_win.count(True)

if pedro > lucas:
	print "Campeao: Pedro!"
if lucas > pedro:
	print "Campeao: Lucas!"
else:
	print "A competicao terminou empatada!"
for i, x in enumerate(pedro_win):
	if x:
		print "Rodada #%d: Pedro foi o vencedor" % (i+1)
	else:
		print "Rodada #%d: Lucas foi o vencedor" % (i+1)