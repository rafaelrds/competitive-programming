n, s = map(int,raw_input().split());
vl = map(int,raw_input().split() );

m = 0;
for e in vl:
    if e > m: m = e;
vl.remove(m)

som = sum(vl)

if som <= s: print 'YES'
else: print 'NO'