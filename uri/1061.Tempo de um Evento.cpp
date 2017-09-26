#include <bits/stdc++.h> 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define M  1000000007
#define N 2000000000+5

#define uke cout << "aqui" << endl;
typedef long long int ll;
typedef unsigned long long int ull;
typedef unsigned int ui;

using namespace std;

int main(){
	//freopen("input.txt","r",stdin);// freopen("output.txt","w",stdout);
	int const DIA = 24*60*60, H = 60*60, MIN = 60;
    int di, hi, mi, si;
    int df, hf, mf, sf;
    
	scanf("Dia %d\n", &di);
    scanf("%d : %d : %d\n", &hi, &mi, &si);
    scanf("Dia %d", &df);
    scanf("%d : %d : %d", &hf, &mf, &sf);
    
	int s1 = (di - 1) * DIA + hi * H + mi * MIN + si;
    int s2 = (df - 1) * DIA + hf * H + mf * MIN + sf;
    int diff = s2 - s1;

    int x = diff / (DIA); diff -= x * DIA;
	printf("%d dia(s)\n", x);
    x = diff / H; diff -= x * H;
    printf("%d hora(s)\n", x);
    x = diff / MIN; diff -= x * MIN;
    printf("%d minuto(s)\n", x);
    printf("%d segundo(s)\n", diff);
    return 0;
}
