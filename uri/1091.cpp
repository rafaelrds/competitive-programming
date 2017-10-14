#include <iostream>

using namespace std;

int main()
{
	int K, d_x, d_y, X, Y;

	while (cin >> K && K != 0)
	{
		cin >> d_x >> d_y;
		while(K--)
		{
			cin >> X >> Y;
			if (X == d_x or Y == d_y)
				cout << "divisa" << endl;
			else if (X > d_x && Y > d_y)
				cout << "NE" << endl;
			else if (X < d_x && Y > d_y)
				cout << "NO" << endl;
			else if (X > d_x && Y < d_y)
				cout << "SE" << endl;
			else if (X < d_x && Y < d_y)
				cout << "SO" << endl;
		}
	}


	return 0;
}
