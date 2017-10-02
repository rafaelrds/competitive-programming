name = raw_input()
num = int(raw_input())
table = map(int,raw_input().split())

t_value = 0
biggest = max(table)

#print name,'\n',num,'\n',table

for i in xrange(len(name) + num):
	if i < len(name):
		t_value += (i+1) * table[ord(name[i]) - 97]
	else:
		t_value+= (i+1) * biggest

print t_value
