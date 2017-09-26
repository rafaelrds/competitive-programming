N = int(raw_input())
X = map(int, raw_input().split())
index = 0
mi = X[index]

for i, el in enumerate(X):
    if (el < mi):
        index = i
        mi = el


print "Menor valor: %d" % (mi)
print "Posicao: %d" % (index)
