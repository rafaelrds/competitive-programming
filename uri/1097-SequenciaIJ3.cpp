#include <cstdio>

int main(){
    int i = 1, j = 7, a = 0;
    while ( 1 ){
	printf("I=%d J=%d\n", i, j+a);
	if (i == 9 && j == 5) break;
	
	if(j == 5) {
	    j=8;
	    i+=2;
	    a+=2;
	}
	j--;
    }


    return 0;
}
