n ,d = map(int,raw_input().split())
t_songs = map(int,raw_input().split())


total = 0
n_churu = 0
for i in xrange(len(t_songs)):
	total += t_songs[i]
	if i < len(t_songs) -1:
		n_churu+=2
		total += 10

n_churu += (d-total)/5

print n_churu if d >= total else '-1'
#print n_churu, total, d-total