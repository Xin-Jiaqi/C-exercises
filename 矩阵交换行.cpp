//给定一个5*5的矩阵（数学上，一个r×c的矩阵是一个由r行c列元素排列成的矩形阵列）
//将第n行和第m行交换，输出交换后的结果。

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
