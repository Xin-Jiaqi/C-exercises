#include <stdio.h>

int main(){
	
	int n;
	scanf("%d",&n);
	
	int i,j,m;
	for (i = n; i >= 0; i --){
		char ch ='A';
		for (j = 0; j < n - i; j ++){
			printf("  ");
		}
		for (m = 0; m < i; m ++){
			printf("%c",ch);
			ch ++;
			if(m != (i-1)){
				printf(" ");
			}
				}
	if( i != 0){
	printf("\n");
	}
}
			

				
	return 0;
}

	
	
