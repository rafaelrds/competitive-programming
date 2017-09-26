#include <iostream>
#include <stdio.h>
#include <float.h>

using namespace std;

int main()
{
	int N;
	float D, A, B, DT, AT, BT, t_min = 0, t_max = FLT_MAX, target_min, target_max;  
	bool ans = true;
	cin >> N;
	for (int i = 0; i < N; ++i)
	{
		cin >> D >> A >> B;
		if (t_min < A/D) t_min = A/D;
		if (t_max > B/D) t_max = B/D;

		// cout << "t_min: " << t_min << endl;
		// cout << "t_max: " << t_max << endl << endl;
		if (t_max < t_min){
			ans = false;
			break;	
		} 
	}
	cin >> DT >> AT >> BT;
	target_min = AT/DT, target_max = BT/DT;

	// cout << "t_min: " << t_min << " t_max: " << t_max << endl;
	// cout << "target_min " << AT/DT << " target_max " << BT/DT;
	if (ans)
	{
		if (target_min <= t_min && target_max >= t_min) ans = true;
		else if (target_min <= t_max && t_max >= target_max) ans = true;
		else ans = false, cout <<" lol " ;
	}

	printf("%s\n", (ans) ? "Y" : "N");

	return 0;0
}