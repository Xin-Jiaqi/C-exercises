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
	}//¶ÁÈëº¯Êý
	
	
	int judge = 1;
	int p,q;
	
	if (n != 1){
		for(p = 1; p < n; p ++){
			for(j = 0; q < p; q ++){
				if(a[p][q]){
					judge = 0;
				}
			}
		}
	}else{
		judge = 0;
	}
	
	if(judge){
		printf("YES");
	}else{
		printf("NO");
	}

	return 0;	
}
