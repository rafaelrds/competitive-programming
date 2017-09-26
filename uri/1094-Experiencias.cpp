#include<iostream>

using namespace std;

int main(){
    int n, q, q_c = 0 , q_r = 0, q_s = 0;
    char T;

    cin >> n;
    for(int i = 0; i < n; ++i){
	cin >> q >> T;
	if (T == 'C') q_c += q;
	else if (T == 'S') q_s += q;
	else if (T == 'R') q_r += q;
    }
    
    float tot = q_r + q_c + q_s;
    
    printf("Total: %d cobaias\n", q_c + q_r + q_s);
    printf("Total de coelhos: %d\n", q_c);
    printf("Total de ratos: %d\n", q_r);
    printf("Total de sapos: %d\n", q_s);
    printf("Percentual de coelhos: %.2f %%\n", 100 * q_c/tot);
    printf("Percentual de ratos: %.2f %%\n", 100 * q_r/tot);
    printf("Percentual de sapos: %.2f %%\n", 100* q_s/tot);

    return 0;
}
