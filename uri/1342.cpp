#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int P, S, T1, T2, T3;
    int N, d1, d2;
    while (true) {
        cin >> P >> S;
        if (P == 0 && S == 0) break;

        int squares[P + 1], isTrapped[P + 1];
        memset(squares, 0, sizeof(squares));
        memset(isTrapped, 0, sizeof(isTrapped));

        cin >> T1 >> T2 >> T3;
        cin >> N;
        int current_player = 1;
        int winner = 0;
        for (int i = 0; i < N; i++) {
            if (!isTrapped[current_player]) {
                cin >> d1 >> d2;
                squares[current_player] += (d1 + d2);

                if (squares[current_player] == T1 || squares[current_player] == T2 ||
                    squares[current_player] == T3) {
                    isTrapped[current_player] = 1;
                }
                else if (squares[current_player] > S) {
                    winner = current_player;
                    break;
                }
                
            } else {
                isTrapped[current_player] = 0;
                i--; // round doesn't count
            }
  
            current_player++;
            if (current_player > P)
                current_player = 1;
        }
        cout << winner << endl;
    }


    return 0;
}