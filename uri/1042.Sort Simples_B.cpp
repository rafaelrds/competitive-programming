#include <bits/stdc++.h> 

#define PI 3.14159

using namespace std;

int main()
{
    int v[3], o[3];
    cin >> v[0] >> v[1] >> v[2];
    memcpy(o, v, sizeof(v));
    sort(o, &o[3]);
    for (int i = 0; i < 3; i++)
        cout << o[i] << endl;
    cout << endl;
    for (int i = 0; i < 3; i++)
        cout << v[i] << endl;
        
    return 0;
}
