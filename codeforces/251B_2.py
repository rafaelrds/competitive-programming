n , x = map(int,raw_input().split())
chapts = map(int,raw_input().split())

chapts.sort()

time_spent = x
total_time = 0

for c in chapts:
	total_time += time_spent * c	
	if time_spent > 1:
		time_spent -= 1
			
print total_time