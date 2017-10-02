import string
full = raw_input()
letters = []
for l in full:
	if l in string.ascii_letters:
		letters.append(l);
		
print len(set(letters))