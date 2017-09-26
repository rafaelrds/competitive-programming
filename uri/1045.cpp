#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool is_triangle(float a, float b, float c) {
    return a >= b + c;
}

int main () {
    float a, b, c;
    cin >> a >> b >> c;
    vector<double> arr;
    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);
    sort(arr.begin(), arr.end());
    reverse(arr.begin(), arr.end());
    a = arr[0];
    b = arr[1];
    c = arr[2];

    
    if (!is_triangle(a,b,c)) {
    if (a*a == b*b + c*c)
        cout << "TRIANGULO RETANGULO" << endl;
    else if (a*a > b*b + c*c)
        cout << "TRIANGULO OBTUSANGULO" << endl;
    else if (a*a < b*b + c*c)
        cout << "TRIANGULO ACUTANGULO" << endl;
    if (a == b && b == c)
        cout << "TRIANGULO EQUILATERO" << endl;
    else if (a == b or b == c or a == c)
        cout << "TRIANGULO ISOSCELES" << endl;
    }
    else {
    cout << "NAO FORMA TRIANGULO" << endl;
    }
    return 0;
}   
