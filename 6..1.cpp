#include <stdio.h>

int main(){
	
	int n;
	scanf("%d",&n);
	
	char table[n+1][n+1];
	
	int c,d;
	for(c = 0; c <= n; c ++){
		for(d = 0; d <= n; d ++){
			table[c][d] = 0;
		}
	}
	table[0][0] = ;
	
	int i = 1;
	while(i <= n){
		table[0][i] = i;
		i ++;
	}//第一行

	int j = 1;
	while(j <= n){
		table[j][0] = j;
		j ++;
	}//第一列 
	
	int p,q;
	for (p = 1; p <= n; p ++){
		for (q = 1; q <= p; q ++){
			table[p][q] = p * q;
		}
	}
//表格内容 
	
	int a,b;
	for(a = 0; a <= n; a ++){
		for(b = 0; b <= n; b ++){
			printf("%d ",table[a][b]);
		}
		printf("\n");
	}
	
	return 0;
} 
