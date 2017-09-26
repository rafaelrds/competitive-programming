#include <iostream>
#include <queue>
#include <stack>

using namespace std;

int main()
{
	int n;

	while (cin >> n && !cin.eof())
	{
		stack<int> s;
		queue<int> q;
		priority_queue<int> pq;

		bool is_stack = true, is_queue = true, is_pq = true;
		for (int i = 0; i < n; ++i)
		{
			int op, num;
			cin >> op >> num;

			if (op==1)
			{
				s.push(num);
				q.push(num);
				pq.push(num);
			}
			else if (op==2)
			{
				if(s.top() != num)
					is_stack=false;
				if (q.front()!=num)
					is_queue=false;
				if (pq.top() != num)
					is_pq=false;

				s.pop();
				q.pop();
				pq.pop();
			}

		}

			if (is_stack and !is_queue and !is_pq)
				cout << "stack" << endl;
			else if (!is_stack and is_queue and !is_pq)
				cout << "queue" << endl;
			else if (!is_stack and !is_queue and is_pq)
				cout << "priority queue"<< endl;
			else if (!is_stack and !is_queue and !is_pq)
				cout << "impossible" << endl;
			else
				cout << "not sure" << endl;	
	}
	
	return 0;
}