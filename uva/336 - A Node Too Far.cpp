#include <bits/stdc++.h> 
#include <stdio.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
 
#define M 1000000000
#define N 2000000000+5
 
#define aqui cout << "aqui" << endl;

#define pb push_back
#define lb lower_bound
#define ub upper_bound
 
using namespace std;

typedef vector<int> vi;
typedef vector<vi> vv;


int main()
{  
    int Case = 1, NC;
    while (cin >> NC, NC != 0)
    {
        map<int, vector<int> > adjList;

        for (int i = 0; i < NC; ++i)
        {
            int u, v;
            cin >> u >> v;
            adjList[u].push_back(v);
            adjList[v].push_back(u);
        }
        int s, ttl;
        while (cin >> s >> ttl, !(s == 0 && ttl == 0))
        {
            // Use BFS to solve the SSSP problem.
            queue<int> q;
            map<int, int> dist;
            // The starting node is always reachable.
            int reachableNodes = 1;

            dist[s] = 0;
            q.push(s);
            while (! q.empty())
            {
                int u = q.front();
                q.pop();
                for (size_t i = 0; i < adjList[u].size(); ++i)
                {
                    int v = adjList[u][i];
                    if (! dist.count(v))
                    {
                        dist[v] = dist[u] + 1;
                        if (dist[v] <= ttl)
                        {
                            q.push(v);
                            ++reachableNodes;
                        }
                    }
                }
            }
            cout << "Case "
                 << Case++
                 << ": "
                 << adjList.size() - reachableNodes
                 << " nodes not reachable from node "
                 << s 
                 << " with TTL = "
                 << ttl
                 << "."
                 << endl;
        }
    }
    return 0;
}
