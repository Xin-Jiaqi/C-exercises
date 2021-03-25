//9 June
#include <stdio.h>
#include <string.h>

int main(){
	
	int matrix[5][5];
	int i,j;
	for(i = 0; i < 5; i ++){
		for(j = 0; j < 5; j ++){
			scanf("%d",&matrix[i][j]);
		}
	}
	
	int m,n;
	scanf("%d %d",&m,&n);//m=1 n=5
	
	int change[5];
	
	for(i = 0; i < 5; i ++){
			change[i] = matrix[m-1][i];
	}
	for(i = 0; i < 5; i ++){
			matrix[m-1][i] = matrix[n-1][i];
	}
	for(i = 0; i < 5; i ++){
			matrix[n-1][i] = change[i];
	}
	
	for(i = 0; i < 5; i ++){
		for(j = 0; j < 5; j ++){
			printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}
		
	return 0;
}

