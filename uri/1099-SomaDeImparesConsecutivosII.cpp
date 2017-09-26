#include <cstdio>
#include <iostream>

using namespace std;

int main(){
    int n, a, b, aux;
    cin >> n;
    for (int i = 0; i < n; ++i){
	cin >> a >> b;
	if (a > b)
	    aux = b;
	    b = a;
	    a = aux;

	if(a-b != 0){
	    if(a % 2 == 0)
		    a = (a/2)-1;
	    else
		a = (a-1) /2;
	    if (b % 2 == 0)
		b = b/2;
	    else
		b = (b-1)/2;
	    cout << (b*b - a*a - 2*a -1) << endl;

	}
    }

    return 0;
}
