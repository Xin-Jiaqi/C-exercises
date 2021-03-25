#include <stdio.h>
#include <stdbool.h>

int main(){
	
	int m,n;
	scanf("%d %d",&m,&n);
	
	int number;
	int is_prime = 1;
	int i,ret;
	for (number = m; number <= n; number ++){
		for (i = 2; i < number; i++){
			ret = number % i;
			if (ret == 0){
				is_prime = 0;
				break;
			}
			is_prime = 1;
		}
		if (is_prime){
			printf("%d ",number);
		} 
	}
	
	return 0;
}
