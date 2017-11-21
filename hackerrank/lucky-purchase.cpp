#include <iostream>
#include <string>
#include <climits>

using namespace std;

bool isOK(int price, string name) {
    int sevens = 0, fours = 0, others = 0;
    while (price) {
        int digit = price % 10;
        if (digit == 4)
            fours++;
        else if (digit == 7)
            sevens++;
        else
            others++;

        price /= 10;
    }
    return sevens == fours && others == 0;
}

int main() {
    int n;
    cin >> n;
    string laptop = "";
    int price;
    string chosen_laptop = "";
    int chosen_price = INT_MAX;
    while (n--) {
        cin >> laptop >> price;

        if (isOK(price, laptop) && price < chosen_price) {
            chosen_laptop = laptop;
            chosen_price = price;
        }
    }
    if (chosen_laptop == "")
        cout << -1 << endl;
    else
        cout << chosen_laptop << endl;


    return 0;
}