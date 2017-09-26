#include <iostream>
#include <algorithm>

#define INF 1000000000

using namespace std;

int main () {
    int n, maior = -INF, index;
    for(int i = 1; i <= 100; ++i){
	cin >> n;
	if( n > maior ){
	   maior = n; index = i; 
	}
    }
    
    cout <<  maior << "\n" << index << endl;


    return 0;
}
