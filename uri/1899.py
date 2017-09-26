N = int(input())

t_min = 0
t_max = 1000000000.0
ans = True
for i in range(N):
	D, A, B = map(float, input().split())
	if (t_min < A/D):
		t_min = A/D
	if (t_max > B/D):
		t_max = B/D
	if (t_max < t_min):
		ans = False
		break
	
DT, AT, BT = map(float, input().split())
target_min = AT/DT
target_max = BT/DT
if (ans):
	if (target_min <= t_min <= target_max):
		ans = True
	elif (target_min <= t_max <= target_max):
		ans = True
	else:
		ans = False
if (ans):
	print("Y")
else:
	print("N")
