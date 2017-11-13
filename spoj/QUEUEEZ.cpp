#include <stdio.h>
#include <queue>

using namespace std;

int main() {
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);

    int T;
    scanf("%d", &T);
    queue<int> q;
    int query, n;

    while (T--) {
        scanf("%d", &query);
        if (query == 1) {
            scanf("%d", &n);
            q.push(n);
        }
        else if (query == 2) {
            if (!q.empty())
                q.pop();
        }
        else if (query == 3) {
            if (!q.empty())
                printf("%d\n", q.front());
            else
                printf("Empty!\n");
        }

    }


    return 0;
}