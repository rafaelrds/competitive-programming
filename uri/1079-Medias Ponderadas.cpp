#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int n;
    float k, j, l;
    
    cin >> n;
    for (int i=0; i<n; ++i) {
        cin >> k >> j >> l;
        printf("%.1f\n",((2*k + 3*j + 5*l)/10) );    
    
    }
    return 0;
}

