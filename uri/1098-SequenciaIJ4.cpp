#include <cstdio>

using namespace std;

int main(){
    float x = 0, y = 0;
    for (int n = 1; n < 45; ++n)
    {
    	if ( n%4 != 0 ){
    		x = 0.2 * (n-n%4)/4;
    		y = n % 4;
    		printf("I=%lg J=%lg\n", x, x+y);
    	}
  }
}
