#include <bits/stdc++.h> 


int main(void) {
	int instances, coinNum, coins[105], coin, sum, halfsum;
	int *res = (int *)malloc(101 * 25001 * sizeof(int));
	int n,q,i,j;
	
	for (i=0;i<101;i++){
		res[i*25001];
	}
	
	for (i=0;i<25001;i++){
		res[i] = 0;
	}
	
	scanf("%d", &instances);
	for(n = 0; n < instances ; n++){
		scanf("%d",&coinNum);
		sum = 0;
		
		for(q = 0; q< coinNum ; q++){
			scanf("%d",&coins[q]);
			sum += coins[q];
		}
		
		halfsum = sum/2;
		for (i=1;i<coinNum + 1; i++){
			for(j=1; j< halfsum+1; j++){
				if(coins[i-1] > j){
					res[i*25001 + j] = res[(i-1)*25001 + j];
				}else if(res[(i-1)*25001 + j - coins[i-1]] + coins[i-1] > res[(i-1)*25001 + j]){
					res[i*25001 + j] = res[(i-1)*25001 + j - coins[i-1]] + coins[i-1];
				}else{
					res[i*25001 + j] = res[(i-1)*25001 + j];
				}
			}
		}
		printf("%d\n",sum - 2*res[coinNum*25001 + halfsum]);
	}
	return 0;
}

