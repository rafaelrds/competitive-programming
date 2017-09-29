#include <bits/stdc++.h> 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define ll long long
#define pii pair<int,int>
#define db(x) cout << x << endl;

using namespace std;

int in[16];
pii pd[1<<16][111];
int mark[1<<16][111];
int n,m,t,num,resp=0, resp2, turn = 1;

pair<int,int> rec(int mask, int ant){
	if( mark[mask][ant] == turn ) return pd[mask][ant];
	mark[mask][ant] = turn;

	pii ret(-1,0), aux;
	bool ok = 0;
	for (int i = 0; i < n; ++i){
		if( !((mask >> i) & 1) ){
			ok = true;
			aux = rec( (mask | (1<<i)) , in[i]);
			aux.first += abs(in[i] - ant);
			if( ret.first < aux.first){	
				ret.first = aux.first; ret.second = aux.second;
			} else if( ret.first == aux.first) {
				ret.second += aux.second;
			}
		}
	}
	if(!ok){
		return pd[mask][ant] = pii(ant,1);
	}
	return pd[mask][ant] = ret;
}

int main(){
	 //freopen("in.txt", "r", stdin);
	 //freopen("out.txt", "w", stdout);
	while(scanf("%d", &n) > 0 && n){
		for(int i = 0; i < n; ++i){ scanf("%d", in+i); }
		pii ret = rec(0,0);
		turn++;
		printf("%d %d\n", ret.first + 2 * n, ret.second);
	}
	return 0;
}
