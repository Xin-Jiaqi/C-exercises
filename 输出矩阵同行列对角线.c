//9 June 7:06_7:10£» 10 June(failed,don't know why..
#include <stdio.h>
#include <string.h>

int main(){

	int N,i,j;
	scanf("%d %d %d",&N,&i,&j);
	
	int x,y;
	for(x = 0; x < N; x ++){
		printf("(%d,%d) ",i,x+1);
	}printf("\n");
	
	for(x = 0; x < N; x ++){
		printf("(%d,%d) ",x+1,j);
	}printf("\n");
	
	for(x = 0; x < N && x+j-i < N; x ++){
		printf("(%d,%d) ",x+1,x+1+j-i);
	}printf("\n");
		
	for(x = N; x > 0; x --){
		printf("(%d,%d) ",x,N+1-x);
	}printf("\n");
	
	return 0;
}
