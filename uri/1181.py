L = int(raw_input())
T = raw_input()

M = [[0] * 12 for line in range(12)]
for line in xrange(12):
    for col in xrange(12):
        M[line][col] = float(raw_input())

if T == 'S':
    print sum(M[L])
elif T == 'M':
    print sum(M[L])/12
