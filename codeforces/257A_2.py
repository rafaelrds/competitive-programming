n, m = map(int,raw_input().split()) 
candies = map(int,raw_input().split())

i = 0
find = False
while True:
	if candies[i] > 0:
		candies[i] -= m
		
	if max(candies) <= 0:
		break
	
	i += 1
	
	if i == (len(candies)):
		i = 0



print i+1