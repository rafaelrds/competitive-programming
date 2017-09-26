#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main ()
{
	int P, M, F, Q, B, e;
	vector<int> p, m, f, q, b;

	cin >> P;
	for (int i = 0; i < P; ++i)
	{
		cin >> e;
		p.push_back(e);
	}
	
	cin >> M;
	for (int i = 0; i < M; ++i)
	{
		cin >> e;
		m.push_back(e);
	}
	
	cin >> F;
	for (int i = 0; i < F; ++i)
	{
		cin >> e;
		f.push_back(e);
	}
	
	cin >> Q;
	for (int i = 0; i < Q; ++i)
	{
		cin >> e;
		q.push_back(e);
	}
	
	cin >> B;
	for (int i = 0; i < B; ++i)
	{
		cin >> e;
		b.push_back(e);
	}
	
	int K;
	cin >> K;
	
	vector<int> somas;
	for (int i = 0; i < P; ++i)
	{
		for (int j = 0; j < M; ++j)
		{
			for (int k = 0; k < F; ++k)
			{
				for (int l = 0; l < Q; ++l)
				{
					for (int z = 0; z < B; ++z)
					{
						e = p[i] + m[j] + f[k] + q[l] +b[z];
						somas.push_back(e);
					}
				}
			}
		}
	}

	int ans = 0, count = 0;
	sort(somas.begin(), somas.end());
	reverse(somas.begin(), somas.end());

	for (int i = 0; i < K; ++i)
	{
		ans += somas[i];
	}
	
	cout << ans << endl;

	return 0;	
}