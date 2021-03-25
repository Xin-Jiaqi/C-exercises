#include <stdio.h>
#include <math.h>

int main(){
	
	int m,n;
	scanf("%d,%d",&m,&n);
	
	int a,b;
	a = m/100;
	b = n/100;
	
	int p,q;
	
	int i,j,k;
	for( k = a; k < b; k ++){
		for( j = 0; j <= 9; j ++){
			for( i = 0; i <= 9; i ++){
				p = i + j*10 +k*100;
				q = pow(i,3)+pow(j,3)+pow(k,3);
				if ( p == q){
					printf("%d\n",p);
				}
			}
		}
	}
	
	return 0;
} 
