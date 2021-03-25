#include <stdio.h>

int main(){
	int m,n;
	scanf("%d %d",&m,&n);
	
	int i,j;
	int is_prime = 1;
	int ret;
	int prime[100];
	int count = 0;
	
	for (i = m; i <= n; i ++){
		for (j = 1; j <= i; j ++){
			ret = i/j;
			if(ret == 0){
				is_prime = 0;
				break;
			}
		}
		if (is_prime){
			prime[count] = i;
			count ++;
		}
	}
	
	int k;
	for (k = 0; k < count; k ++){
		printf("%d",prime[k]);
		if (k != (count - 1)){
			printf(" ");
		}
	}
	
	return 0;
}
