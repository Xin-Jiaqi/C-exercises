#include <stdio.h>

int prime(int x);

int main(){
	
	int m,n;
	scanf("%d,%d",&m,&n);
	
	int i,count,sum;
	count = 0;
	sum = 0;
	
	for (i = m; i <= n; i ++){
		if (prime(i)){
			count ++;
			sum += i;
		}
	}
	
	printf("count=%d,sum=%d",count,sum);
	
	return 0;
}

int prime(int x){
	int k,j;
	int is_prime = 1;

	if (x != 2){
		for ( k= 2; k < x; k ++){
			j = x % k;
			if (j == 0){
				is_prime = 0;
				break;
			} 
		}
	}
	
	return is_prime;
}
