#include <stdio.h>

int main(){
	
	int n;
	scanf("%d",&n);
	
	int a[n][n];
	
	int i,j;
	for(i = 0; i < n; i ++){
		for(j = 0; j < n; j ++){
			scanf("%d",&a[i][j]);
		}
	}//读入函数
	
	int sum = 0;
	for(i = 0; i < n; i ++){
		for(j = 0; j < n; j ++){
			sum += a[i][j];
		}
	}
	
	int m = 0;//m为多余量
	
	for(i = 0; i < n; i ++){
		for(j = 0; j < n; j ++){
			if((i + j + 1) == n){
				m += a[i][j];
			}
		}
	}	 


	for(j = 0; j < n; j ++){
		m += a[n-1][j];
			}
			
	for(i = 0; i < n; i ++){
		m += a[i][n-1];
	}
	
	m -= (a[0][n-1] + a[n-1][n-1] + a[n-1][0]);
	
	printf("sum=%d\n",sum - m);
	
	return 0;
} 
