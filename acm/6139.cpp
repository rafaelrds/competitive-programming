#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>

#define REP(i,x) for(int i=0;i<(int)(x);i++)
#define FOR(i,c) for(__typeof((c).begin())i=(c).begin();i!=(c).end();i++)
#define RREP(i,x) for(int i=(x);i>=0;i--)
#define RFOR(i,c) for(__typeof((c).rbegin())i=(c).rbegin();i!=(c).rend();i++)
using namespace std;

typedef vector<int> vi;

#include <cstdio>
#include <vector>
using namespace std;

typedef vector<int> vi;
#define LSOne(S) (S & (-S))

class FenwickTree{
	private:
		vector<int> ft;
		int n;
	public:
		FenwickTree(int size){
			n=1;
			while(n<size)n<<=1;
			ft=vector<int>(2*n,0);
		}

		void update(int x,int a){
			if(a) a = a/abs(a);
			x = x+n-1;
			ft[x]=a;
			while(x>0){
				x=(x-1)/2;
				ft[x]=ft[x*2+1]*ft[x*2+2];
			}
		}
		//a<=x<b
		int query(int a,int b,int k=0,int l=0,int r=-1){
			if(r==-1) r=n;
			if(r<=a||b<=l) return 1;
			if(a<=l&&r<=b){
				return ft[k];
			}else{
				return query(a,b,k*2+1,l,(l+r)/2)*query(a,b,k*2+2,(l+r)/2,r);
			}
		}
};

main(){
	int n,k,i,j;
	while(cin >> n >> k){
		FenwickTree rmq(n);
		int ans;
		for(int i=0 ; i < n ; i++){
			int x;
			cin >> x;
			rmq.update(i, x);
		}
		for(int i = 0; i < k ; i++){
			char c;
			int x,y;
			cin >> c >> x >> y;
			if(c == 'C') rmq.update(x-1, y);
			else{
				int ret = rmq.query(x-1, y);
				cout << (ret ? (ret > 0 ? '+' : '-') : '0');
			}
		}
		cout << endl;
	}
	return 0;
}

