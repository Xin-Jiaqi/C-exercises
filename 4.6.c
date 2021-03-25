#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	
	char c = 'A';
	
	int i;
	int j = 0;
	for (i = n; i >= 1; i --){
		do{
			if (j != (i-1)){
				printf("%c ",c);
				c ++;
				j ++;
			}
			else{
				printf("%c\n",c);
				c ++;
				j ++;
			}
		}while(j < i);
		j = 0;
	}
	
	return 0;
}
