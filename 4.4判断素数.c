#include <stdio.h>

int main(){
	int m,n;
	printf("plz enter m,n(m>1,n<=200):\n");
	scanf("%d %d",&m,&n);
	
	int is_prime = 1;
	
	int i = m;
	if (i == 2){
		printf("%d ",i);
	}
	else if( ((i+1)/2) != 0 ){
		for ( i = m + 1; i <= n; i += 2){
			int j,judgement;
			for (j  = 3; j <= i; j += 2){
				judgement = i/j;
				if ( judgement = 0){
					is_prime = 0;
					break;
				}
			}
			if (is_prime){
				printf("%d ",i);
			}
		}
	}
	
	return 0;
} 
