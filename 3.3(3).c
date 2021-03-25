#include <stdio.h>
#include <math.h>

int main(){
	
	double x;
	int n;
	scanf("%lf   %d",&x,&n);
	
	double result = 1.0;
	
	int i,j;
	double a;
	int b = 1;
	for( i = 1; i <= n; i ++){
		a = pow(x,i);
		
		for( j = 1; j <= i; j ++){
			b *= j;
		}
		
		result += (1.0*a)/b;
		b = 1;
	}
	
	printf("%.6f",result);
	
	return 0;
}
