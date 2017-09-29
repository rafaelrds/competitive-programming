#include <bits/stdc++.h> 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#include <string>

using namespace std;

void reverse(char s[]){
      int length = strlen(s) ;
      int c, i, j;

      for (i = 0, j = length - 1; i < j; i++, j--)
     {
         c = s[i];
         s[i] = s[j];
         s[j] = c;
      }
}

template< typename T, size_t N >
void reverse_array( T array[ N ] ) {
   for( size_t i = 0; i < N / 2; ++i )
       swap( array[ i ], array[ N-i-1 ] );
}


int rev(int num){
	int ans = 0;
	while(num > 0){
		ans = num % 10 + 10*ans;
		num /= 10;
	}
	return ans;
}

int main(){
	//freopen("in.txt","r",stdin); //freopen("out.txt","w",stdout);
	int a,b,n;
	scanf("%d",&n);
	while(n--){
	scanf("%d", &a);
	scanf("%d", &b);
	a = rev(a); b = rev(b);
	a = rev(a+b);
	printf("%d\n",a);
	}	
	
	
	return 0;
}
